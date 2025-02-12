package jdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import dao.Users;

public class UsersSelectAllTest {

	public static void main(String[] args) {
		Connection conn = null;
		PreparedStatement pstmt = null;
		
		try {
			// jdbc 드라이버 등록
			Class.forName("oracle.jdbc.OracleDriver");
			// 연결
			conn = DriverManager.getConnection(
					"jdbc:oracle:thin:@localhost:1521/xe",
					"javauser",
					"pwjava");
			System.out.println(conn + "DB 연결 성공!!");
			
			// db 작업 - 추가
			String sql = "SELECT * FROM users";
			pstmt = conn.prepareStatement(sql);
		
			// sql 실행
			ResultSet rs = pstmt.executeQuery();
			List<Users> userList = new ArrayList<>();
			while(rs.next()) {
				Users user = new Users();
				user.setUserId(rs.getString("userid"));
				user.setUserName(rs.getString("username"));
				user.setUserPassword(rs.getString("userpassword"));
				user.setUserAge(rs.getInt("userage"));
				user.setUserEmail(rs.getString("useremail"));
				
				userList.add(user);
			}
			for(int i=0; i<userList.size(); i++) {
				Users user = userList.get(i);
				System.out.println(user);
				
//				System.out.println("===============================");
//				System.out.println("userId: " + user.getUserId());
//				System.out.println("userName: " + user.getUserName());
//				System.out.println("userPassword: " + user.getUserPassword());
//				System.out.println("userAge: " + user.getUserAge());
//				System.out.println("userEmail: " + user.getUserEmail());
			}
			
			rs.close();
			pstmt.close();
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (SQLException e) {
			e.printStackTrace();
		} finally {
			if(conn != null) {
				try {
					conn.close();
					System.out.println("연결 끊음");
				} catch (SQLException e) {
					e.printStackTrace();
				}
			}
		}

	}

}
