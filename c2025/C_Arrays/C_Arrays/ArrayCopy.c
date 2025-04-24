//#include <stdio.h>
//
//int main()
//{
//	char a1[] = "NET";
//	char a2[4];
//
//	printf("%c\n", a1[0]);
//	printf("%c\n", a1[1]);
//	printf("%c\n", a1[3]); //NULL 문자
//	printf("%c\n", a1[2]);
//
//	//a1을 a2에 복사
//	for (int i = 0; i < 4; i++)
//	{
//		a2[i] = a1[i];
//	}
//
//	//a2를 문자로 출력
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%c", a2[i]);
//	}
//	printf("\n");
//
//	//a2를 문자열로 출력
//	printf("%s\n", a2);
//	printf("===========\n");
//
//	//a1을 a2에 거꾸로 복사하기(NET -> TEN)
//	for (int i = 0; i < 4; i++)
//	{
//		a2[i] = a1[2 - i];
//	}
//	a2[3] = '\0'; 
//
//	//a2를 문자열로 출력
//	printf("%s\n", a2);
//
//	return 0;
//}