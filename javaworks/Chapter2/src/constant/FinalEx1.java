package constant;

public class FinalEx1 {

	public static void main(String[] args) {
		//상수 사용하기
		final int MIN_NUM = 0;
		final int MAX_NUM = 100;
		
		//MAX_NUM = 1000;  수정할 수 없음
		
		System.out.println(MIN_NUM);
		System.out.println(MAX_NUM);
		
		//원의 넓이 계산하기
		final double PI = 3.14;
		int radius = 5;
		double area = PI * radius * radius;
		
		System.out.println("원의 넓이 : " + area);
	}
}
