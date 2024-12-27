package jdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class UsersInsertTest {

	public static void main(String[] args) {
		Connection conn = null;
		PreparedStatement pstmt = null;
		
		try {
			// jdbc 드라이버 등록
			Class.forName("oracle.jdbc.OracleDriver");
			// 연결
			conn = DriverManager.getConnection(
					"jdbc:oracle:thin:@localhost:1521/xe",
					"system",
					"pw1234");
			System.out.println(conn + "DB 연결 성공!!");
			
			// db 작업 - 추가
			String sql = "INSERT INTO users(userid, username, userpassword, userage, useremail) "
					+ "VALUES (?, ?, ?, ?, ?)";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, "elsa");
			pstmt.setString(2, "박미량");
			pstmt.setString(3, "u1234");
			pstmt.setInt(4, 31);
			pstmt.setString(5, "elsa@naver.com");
			
			// sql 실행
			int rows = pstmt.executeUpdate();
			System.out.println("저장된 행의 수: " + rows);
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
