package arrays2;

public class Alphabets {

	public static void main(String[] args) {
		// 알파벳 대문자를 저장할 이차원 배열
		char[][] alphabets = new char[13][2];
		char ch = 'A';
		
		/*ch++;
		System.out.println(ch);*/
		
		//배열에 저장
		for(int i=0; i<alphabets.length; i++) {
			for(int j=0; j<alphabets[i].length; j++) {
				alphabets[i][j] = ch;
				ch++;
			}
		}
		
		//전체 출력
		for(int i=0; i<alphabets.length; i++) {
			for(int j=0; j<alphabets[i].length; j++) {
				System.out.print(alphabets[i][j] + " ");
			}
			System.out.println();
		}

	}

}
