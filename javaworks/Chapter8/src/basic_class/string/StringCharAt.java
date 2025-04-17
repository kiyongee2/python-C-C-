package basic_class.string;

public class StringCharAt {

	public static void main(String[] args) {

		String subject = "자바 프로그래밍";
		char charValue = subject.charAt(0);
		System.out.println(charValue);
		
		//주민등록번호에서 남여를 구분
		String ssn = "020815-4234567";
		char gender = ssn.charAt(7);
		
		switch(gender) {
		case '1': case 3:
			System.out.println("남자입니다.");
			break;
		case '2': case '4':
			System.out.println("여자입니다.");
			break;
		default:
			System.out.println("지원되지 않는 기능입니다.");
			break;
		}
	}
}
