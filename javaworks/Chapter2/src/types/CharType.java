package types;

public class CharType {

	public static void main(String[] args) {
		//문자 및 문자열 자료형
		System.out.println("***** 문자 자료형 *****");
		//char(2byte) - 1개 문자 표현
		char ch1 = 'A';
		System.out.println(ch1);
		//(int) - 숫자형으로 변환
		System.out.println((int)ch1);  //아스키 코드값
		
		char ch2 = 66;
		System.out.println(ch2);
		
		int ch3 = 67;
		System.out.println(ch3);
		System.out.println((char)ch3);
		
		char kor1 = '가';
		System.out.println(kor1);
		
		char kor2 = '\uAC00';     //유니코드
		System.out.println(kor2);
		
		System.out.println("***** 문자열 자료형 *****");
		//String 
		String jdk = "jdk";
		String version = "21";
		String java = jdk + version; 
		
		System.out.println(jdk);
		System.out.println(version);
		System.out.println(java);
		
		String cart = "라면";
		System.out.println(cart);
		
		//배열
		String carts[] = {"라면", "빵", "우유"};
		
		for(int i=0; i<3; i++) {
			System.out.println(carts[i]);
		}
	}
}
