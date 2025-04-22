//#include <stdio.h>
//#define MAX_LEN 4
//
//int main()
//{
//	char c1, c2, c3;
//	c1 = 'a';
//	c2 = c1 + 1;
//	c3 = c2 - 1;
//
//	printf("%c %c\n", c2, c3);
//
//	//26개 크기를 가진 문자형 배열 생성
//	char alphabets[26];
//	char ch = 'a';
//
//	//저장
//	for (int i = 0; i < 26; i++) {
//		alphabets[i] = ch;
//		ch++;
//	}
//	//a ~ z와 아스키 코드값 출력
//	for (int i = 0; i < 26; i++) {
//		printf("%c %d\n", alphabets[i], alphabets[i]);
//	}
//
//	char fr1[] = "apple";  //맨 뒤에 널(NULL)문자 있음
//	char fr2[] = {'a', 'p', 'p', 'l', 'e', '\0'};
//	char fr3[] = "사과";
//
//	//sizeof() - 자료형의 크기를 바이트 단위로 변환('\0' 포함)
//	printf("%s %d\n", fr1, sizeof(fr1));
//	printf("%s %d\n", fr2, sizeof(fr2));
//	printf("%s %d\n", fr3, sizeof(fr3));
//
//	return 0;
//}