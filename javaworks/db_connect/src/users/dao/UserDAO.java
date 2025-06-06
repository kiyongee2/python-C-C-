package users.dao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

public class UserDAO {
	
	static {
		try {
			// 클래스 로딩시 드라이버 등록 
			Class.forName("oracle.jdbc.OracleDriver");
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		}
	}
	
	static String url = "jdbc:oracle:thin:@localhost:1521/xe";
	static String username = "system";
	static String password = "pw1234";
	
	//회원 생성
	public void insertUser(Users user) {
		String sql = "INSERT INTO users(userid, userpassword, username, userage) "
				+ "VALUES (?, ?, ?, ?)";
		
		try(Connection conn = DriverManager.getConnection(url, username, password);
			PreparedStatement pstmt = conn.prepareStatement(sql)){
			
			pstmt.setString(1, user.getUserId());
			pstmt.setString(2, user.getUserPassword());
			pstmt.setString(3, user.getUserName());
			pstmt.setInt(4, user.getUserAge());
			
			pstmt.executeUpdate();  //sql 실행(커밋)
		}catch (SQLException e) {
			e.printStackTrace();
		}
	}
	
	//회원 목록 검색
	public List<Users> getUserList() {
		List<Users> userList = new ArrayList<>();
		String sql = "SELECT * FROM users";
		try(Connection conn = DriverManager.getConnection(url, username, password);
			PreparedStatement pstmt = conn.prepareStatement(sql);
			ResultSet rs = pstmt.executeQuery()){
			
			while(rs.next()) {
				Users user = new Users();
				user.setUserId(rs.getString("userid"));
				user.setUserPassword(rs.getString("userpassword"));
				user.setUserName(rs.getString("username"));
				user.setUserAge(rs.getInt("userage"));
			
				userList.add(user);
			}
		}catch(SQLException e) {
			e.printStackTrace();
		}
		return userList;
	}
			
	//회원 1명 검색(상세 보기)
	public Users getUser(String userId) {
		Users user = new Users();
		String sql = "SELECT * FROM users WHERE userid = ?";
		try(Connection conn = DriverManager.getConnection(url, username, password);
			PreparedStatement pstmt = conn.prepareStatement(sql);
			ResultSet rs = pstmt.executeQuery()){
			
			pstmt.setString(1, userId);
			
			if(rs.next()) {
				user.setUserId(rs.getString("userid"));
				user.setUserPassword(rs.getString("userpassword"));
				user.setUserName(rs.getString("username"));
				user.setUserAge(rs.getInt("userage"));
			}
		} catch (SQLException e) {
			e.printStackTrace();
		} 
		return user;
	}
	
	//회원 정보 수정
	public void updateUser(Users user) {
		String sql = "UPDATE users SET userpassword = ?, username = ?, userage = ? "
				+ "WHERE userid = ?";
		try(Connection conn = DriverManager.getConnection(url, username, password);
			PreparedStatement pstmt = conn.prepareStatement(sql)){
			
			pstmt.setString(1, user.getUserPassword());
			pstmt.setString(2, user.getUserName());
			pstmt.setInt(3, user.getUserAge());
			pstmt.setString(4, user.getUserId());
			
			pstmt.executeUpdate();  //sql 실행(커밋)
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}
	
	//회원 정보 삭제
	public void deleteUser(String userId) {
		String sql = "DELETE FROM users WHERE userid = ?";
		try(Connection conn = DriverManager.getConnection(url, username, password);
			PreparedStatement pstmt = conn.prepareStatement(sql)){
			pstmt.setString(1, userId);
			
			pstmt.executeUpdate();  //sql 실행(커밋)
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}
}
























