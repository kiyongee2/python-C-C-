package basic_class.string;

public class StringMethod {

	public static void main(String[] args) {
		//charAt() 메서드 - 매개값의 문자 추출
		String msg = "행운을 빌어요!!";
		
		char ch = msg.charAt(0);
		System.out.println(ch);
		
		//주민등록번호에서 남여를 구분
		String jumin = "020815-4234567";
		char gender = jumin.charAt(7);  //성별
		
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
		
		/* indexOf() 
		   - 매개값을 앞에서부터 찾아서 인덱스(위치) 리턴함
		   - 매개값을 찾을 수 없을때 -1을 리턴함
		*/
		String subject = "자바 프로그래밍 입문";
		int location1 = subject.indexOf("프로그래밍");
		System.out.println(location1);
		
		int location2 = subject.indexOf("코딩");
		System.out.println(location2); //-1
		
		//문자열 검색
		if(subject.indexOf("자바") != -1) {
			System.out.println("자바와 관련된 책이군요!!");
		}else {
			System.out.println("자바와 관련이 없는 책이군요!!");
		}
		
		//substring(beginIdx, endIdx) 
		//매개값의 시작 인덱스부터 끝(끝-1)까지 문자 추출
		String juminNum = "991125-1234567";
		
		String firstNum = juminNum.substring(0, 6);
		System.out.println(firstNum);
		
		String secondNum = juminNum.substring(7);
		System.out.println(secondNum);
		
		/* lastIndexOf()
		   - 매개값을 뒤에서 부터 찾아서 인덱스(위치) 리턴함
		   - 매개값을 찾을 수 없을때 -1을 리턴함
		*/
		String url = "http://www.korea_it.kr/custom/boards";
		int n = url.lastIndexOf("/");
		
		System.out.println(n);
		System.out.println(url.substring(n));
	}
}













