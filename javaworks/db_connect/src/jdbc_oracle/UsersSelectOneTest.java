package jdbc_oracle;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import dao.Users;

public class UsersSelectOneTest {

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
			String sql = "SELECT * FROM users WHERE userid = ?";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, "elsa");
		
			// sql 실행
			ResultSet rs = pstmt.executeQuery();
			if(rs.next()) {
				Users user = new Users();
				user.setUserId(rs.getString("userid"));
				user.setUserName(rs.getString("username"));
				user.setUserPassword(rs.getString("userpassword"));
				user.setUserAge(rs.getInt("userage"));
				user.setUserEmail(rs.getString("useremail"));
				
				System.out.println("userId: " + user.getUserId());
				System.out.println("userName: " + user.getUserName());
				System.out.println("userPassword: " + user.getUserPassword());
				System.out.println("userAge: " + user.getUserAge());
				System.out.println("userEmail: " + user.getUserEmail());
				
				/*
				String userId = rs.getString("userid");
				String userName = rs.getString("username");
				String userPassword = rs.getString("userpassword");
				int userAge = rs.getInt("userage");
				String userEmail = rs.getString("useremail");
				
				System.out.println("userId: " + userId);
				System.out.println("userName: " + userName);
				System.out.println("userPassword: " + userPassword);
				System.out.println("userAge: " + userAge);
				System.out.println("userEmail: " + userEmail);
				*/
			}else {
				System.out.println("아이디가 존재하지 않습니다.");
			}
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
