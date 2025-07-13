//#include <stdio.h>
//
//int main()
//{
//	char str[] = "Hello\nWorld";
//	int pos = strcspn(str, "\n");
//
//	printf("%d\n", pos); //5
//
//	char msg[100];
//	fgets(msg, sizeof(msg), stdin);  //사용자 입력(개행문자 포함됨)
//	str[strcspn(msg, "\n")] = '\0';  // 개행 제거
//
//	/*
//	   # strcspn()은 '\n'의 위치를 찾아서 '\0'으로 수정
//	     str[5] = '\0'
//	   # fgets()로 저장된 실제 문자열
//	     "Good Luck!\n\0"
//	   # strcspn() 처리후
//	     "Good Luck!\0"
//	*/
//	printf("%s", msg);
//
//	return 0;
//}
