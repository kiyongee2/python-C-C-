package jsondata;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.nio.charset.Charset;

import org.json.JSONObject;

public class ParseJson {

	public static void main(String[] args) {
		
		try(BufferedReader br = new BufferedReader(new FileReader("member.json"))){
			String json = br.readLine();
			
			JSONObject root = new JSONObject(json);
			
			System.out.println(root.getString("id"));
			System.out.println(root.getString("name"));
			System.out.println(root.getInt("age"));
			System.out.println(root.getBoolean("student"));
		}catch(IOException e) {
			e.printStackTrace();
		}
	}

}
