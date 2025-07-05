//#include <stdio.h>
//
//int main()
//{
//	//문자열 - 1차원 배열이다.
//	char fr1[5] = "apple";  //오류
//	char fr2[6] = "apple";  //맨 뒤에 널(NULL)문자 있음
//	char fr3[] = {'a', 'p', 'p', 'l', 'e', '\0'};
//	char fr4[] = "바나나"; //한글은 1자에 2byte
//
//	//sizeof() - 자료형의 크기를 바이트 단위로 변환('\0' 포함)
//	printf("%s %d\n", fr1, sizeof(fr1));
//	printf("%s %d\n", fr2, sizeof(fr2));
//	printf("%s %d\n", fr3, sizeof(fr3));
//	printf("%s %d\n", fr4, sizeof(fr4));
//
//	//문자열의 크기 및 출력
//	char msg[] = "Good Luck";
//	int size;
//
//	printf("%d %d\n", sizeof(msg), sizeof(msg[0]));
//
//	size = sizeof(msg) / sizeof(msg[0]);
//	printf("%d", size);
//
//	return 0;
//}