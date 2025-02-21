#include <stdio.h>

int main()
{
	char str[] = "Hello";
	int num[] = { 1, 2, 3, 4 };

	printf("문자 배열에 할당된 메모리의 크기 : %d바이트\n", sizeof(str));
	printf("문자 배열에 할당된 메모리의 크기 : %d바이트\n", sizeof(num));

	//'\0' NULL문자는 문자열(배열)의 끝을 의미함(필수)
	//char msg1[9] = "Thank you"; 
	char msg2[9] = { 'T', 'h', 'a', 'n', 'k', ' ', 'y', 'o', 'u'};
	char msg3[] = { 'T', 'h', 'a', 'n', 'k', ' ', 'y', 'o', 'u' ,'\0'};

	//printf("%s\n", msg1);
	printf("%s\n", msg2);
	printf("%s\n", msg3);

	//문자로 출력
	for (int n = 0; msg3[n] != NULL; n++)
	{
		printf("%c", msg3[n]);
	}
	
	return 0;
}