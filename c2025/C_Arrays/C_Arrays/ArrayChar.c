//#include <stdio.h>
//
//int main()
//{
//	//문자형 배열 생성
//	/*char msg[5];
//
//	msg[0] = 'h';
//	msg[1] = 'e';
//	msg[2] = 'l';
//	msg[3] = 'l';
//	msg[4] = 'o';*/
//
//	//배열의 크기가 6인 문자형 배열 생성
//	char msg[6] = { 'h', 'e', 'l', 'l', 'o' };
//
//	//특정 요소 검색
//	printf("%c\n", msg[4]);
//
//	//요소 수정
//	msg[0] = 'y';
//
//	//요소 추가
//	msg[5] = 'w';
//
//	//요소 출력
//	for (int i = 0; i < 6; i++) {
//		printf("%c ", msg[i]);
//	}
//	printf("\n");
//
//	//알파벳 표기
//	char data = 'a';
//	data++; //data = data + 1;
//	printf("%c\n", data);  //b
//
//	data++;
//	printf("%c\n", data);  //c
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
//	return 0;
//}