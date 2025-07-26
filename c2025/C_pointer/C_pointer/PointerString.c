//#include <stdio.h>
//
//int main()
//{
//	char msg[] = "Good Luck";
//	char* p = msg;
//	int i;
//
//	//문자열 출력
//	printf("%s\n", msg);
//
//	//문자열은 맨 뒤에 '\0' 포함, 포인터는 8byte
//	printf("%d %d\n", sizeof(msg), sizeof(p));
//
//	//문자열의 시작 주소와 배열의 이름은 동일하다.
//	printf("%x %x\n", msg, p);
//
//	//포인터로 출력
//	/*printf("%s\n", p); //p + 0과 같음
//	printf("%s\n", p + 1); 
//	printf("%s\n", p + 2); 
//	printf("%s\n", p + 3); */
//
//	//포인터 역참조로 출력
//	printf("%c\n", *p);
//	printf("%c\n", *(p + 1));
//	printf("%c\n", *(p + 2));
//	printf("%c\n", *(p + 3));
//
//	int size = sizeof(msg) / sizeof(msg[0]);
//
//	//문자로 출력
//	for (i = 0; i < size; i++)
//	{
//		printf("%c", *(p + i));
//	}
//
//	return 0;
//} 