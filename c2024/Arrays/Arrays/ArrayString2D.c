//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	//문자열을 2차원 배열로 선언
//	//fruits[단어의 개수][단어의 최대 길이]
//	char fruits[3][20] = {
//		"apple",
//		"banana",
//		"orange"
//	};
//
//	printf("%s\n", fruits[0]);    
//	printf("0x%x\n", fruits[0]);  //16진수 주소
//	printf("%d\n", &fruits[0]);   //10진수 주소
//
//	printf("%s\n", fruits);
//	printf("0x%x\n", fruits);
//	printf("%d\n", fruits);  //배열의 이름이 첫번째 주소
//
//	// 배열 요소에 접근
//	/*printf("%s\n", fruits[0]);
//	printf("%s\n", fruits[1]);
//	printf("%s\n", fruits[2]);*/
//
//	for (int i = 0; i < 3; i++) {
//		printf("%s\n", fruits[i]);
//	}
//
//	return 0;
//}