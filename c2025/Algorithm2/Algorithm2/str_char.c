//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*int str_char(const char* s, int c) {
//	int i = 0;
//	c = (char)c; //코드값을 문자로 형변환
//	while (s[i] != c) { //s[i] == c, 반복종료
//		if (s[i] == '\0')
//			return -1;  //검색 실패
//		i++;
//	}
//	return i;  //검색 성공
//}*/
//
//int str_char(const char* s, int c) {
//	int i;
//
//	for (i = 0; s[i] != '\0'; i++) {
//		if (s[i] == (char)c) 
//			return i;  //검색 성공
//	}
//
//	return -1;  //검색 실패
//}
//
//
//int main()
//{
//	char str[128]; //이 문자열에서 검색
//	char tmp[128]; //검색할 문자 지정
//	int ch;        //검색할 문자(코드값)
//	int idx;       //문자의 위치
//
//	printf("문자열: ");
//	scanf("%s", str);  //문자열 입력
//
//	printf("검색할 문자: ");
//	scanf("%s", tmp); //검색할 문자 입력
//	ch = tmp[0];      //첫 번째 문자를 검색할 문자로 지정
//
//	if ((idx = str_char(str, ch)) == -1)
//		printf("문자 '%c'는(은) 문자열에 없습니다.\n", ch);
//	else
//		printf("문자 '%c'는(은) %d번째에 있습니다.\n", ch, idx+1);
//
//	return 0;
//}
