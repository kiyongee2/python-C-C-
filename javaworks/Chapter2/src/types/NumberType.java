package types;

public class NumberType {

	public static void main(String[] args) {
		// 숫자 자료형
		System.out.println("***** 정수 자료형 *****");
		
		//byte(1byte) : -128 ~ 127
		byte bData1 = 127;
		//byte bData2 = 128;  //범위를 벗어나 오류
		
		System.out.println(bData1);
		
		//int(4byte) : -21억 ~ 21억
		int iNum1 = 220000000;
		//int iNum2 = 2200000000;
		
		System.out.println(iNum1);
		
		//long(8byte) 
		long lNum = 2200000000L;
		
		System.out.println(lNum);
		
		System.out.println("***** 실수 자료형 *****");
		//float(4byte), double(8byte) - 정밀도 차이
		float fNum = 1.2345678F;  //소수 7자리
		double dNum = 1.2345678901234567; //소수 16자리
		
		System.out.println(fNum);
		System.out.println(dNum);
	}
}
