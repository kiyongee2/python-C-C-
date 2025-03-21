package loop;

public class WhileEx1 {

	public static void main(String[] args) {
		// "Hello" 10번 출력
		
		int n = 1;
		
		while(n <= 10) {
			System.out.println("Hello~ " + n);
			n++;
		}
		
		// 1~10까지의 합계
		int x = 1;
		int sum = 0;
		
		while(x <= 10) {
			sum += x;
			System.out.println("x=" + x + ", sum=" + sum);
			x++;
		}
		System.out.println("합계 : " + sum);
	}

}
