#include <stdio.h>

int main()
{
	char str[] = "Hello\nWorld";
	int pos = strcspn(str, "\n");

	printf("개행문자 위치: %d\n", pos); //5

	str[strcspn(str, "\n")] = '\0';
	/*  strcspn()은 '\n'의 위치를 찾아서 '\0'으로 수정
		str[5] = '\0' */
	printf("-------------------------\n");

	char msg[100];

	printf("메시지 입력: ");
	//fgets()는 Enter를 누르면 개행 문자('\n')도 함께 저장됩니다.
	fgets(msg, sizeof(msg), stdin); 
	msg[strcspn(msg, "\n")] = '\0';  //개행문자 제거
	printf("%s", msg);
	/*
	   # fgets()로 저장된 실제 문자열
	     "Good Luck!\n\0"
	   # strcspn() 처리후
	     "Good Luck!\0"
	*/
	return 0;
}
