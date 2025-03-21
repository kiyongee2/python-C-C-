package variable;

public class Variable {

	public static void main(String[] args) {
		/*
		 * 변수를 선언하고 초기화 
		 * 변수 이름 오류 - 숫자로 시작, 공백, 키워드 사용
		 */
		String name;
		int grade;
		
		name = "한강";
		grade = 2;
		
		//int class = 3;
		int schoolClass = 3;
		
		//'+'는 변수와 문자를 연결하는 연산자
		System.out.println(name + "은 " + grade + "학년 " + schoolClass + "반 입니다.");
		
	}
}
