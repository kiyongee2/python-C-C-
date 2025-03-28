package methods;

public class ScopeVar {
	
	static int x = 0;  //정적 변수
	
	public static int oneUp() {
		//int x = 0; //지역 변수
		x++;
		return x;
	}

	public static void main(String[] args) {
		
		System.out.println(oneUp());
		System.out.println(oneUp());
		System.out.println(oneUp());
		
		//x의 값
		System.out.println("x = " + x);
	}
}
