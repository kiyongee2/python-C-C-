//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
///*
//	입력 버퍼 알아보기
//	- scanf() 는
//	- fgets() 는 '\n'을 가지고 가므로 아래 구문으로 해결
//	  while (getchar() != '\n');
//*/
//
//int main()
//{
//	int no;  //학번
//	char name[10]; //이름
//
//	printf("학번 입력: ");
//	scanf("%d", &no);
//
//	//'\n' 앞까지 버퍼를 비운다.
//	while (getchar() != '\n');
//
//	printf("이름 입력: ");
//	//scanf("%s", name);
//	fgets(name, sizeof(name), stdin);
//
//	printf("학번: %d\n", no);
//	printf("이름: %s\n", name);
//
//	return 0;
//}
