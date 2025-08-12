//#include <stdio.h>
//
///*
//    n값이 커질수록 중복되는 계산 횟수는 많아진다.
//
//	메모이제이션(memoization) 기법
//	- 메모화 또는 메모기법이라 불린다.
//	- 
//*/
//
//int memo[50] = { 0 }; // 계산 결과 저장
//
//int fibo(int n) {
//	if (memo[n] != 0) 
//		return memo[n]; // 이미 계산했으면 바로 반환
//
//	if (n <= 2) 
//		return memo[n] = 1;   // 저장 후 반환
//	return memo[n] = fibo(n - 2) + fibo(n - 1);
//}
//	
//
///*
//     fibo(5) = fibo(3) + fibo(4)
//     fibo(4) = fibo(2) + fibo(3)
//     fibo(3) = fibo(1) + fibo(2)
//
//	 fibo(2)는 여러번 호출됨 - 중복 계산 발생
//
//*/
//
//int main()
//{
//	/*
//	printf("%d\n", fibo(1)); //1
//	printf("%d\n", fibo(2)); //1
//	printf("%d\n", fibo(3)); //2
//	printf("%d\n", fibo(4)); //3
//	*/
//	
//	//1년동안 토끼의 개체수 출력
//	for (int i = 1; i <= 12; i++) {
//		printf("%d ", fibo(i));
//	}
//	
//	return 0;
//}