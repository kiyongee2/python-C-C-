//#include <stdio.h>
//
//int main()
//{
//	//1. while문 사용
//	int num = -1;
//
//	//조건식- false이므로 실행할 수 없음
//	/*while (num != -1) 
//	{
//		printf("숫자 입력(-1 입력시 종료): ");
//		scanf_s("%d", &num);
//	}*/
//
//	//2. do ~ while문 사용
//	do {
//		printf("숫자 입력(-1 입력시 종료): ");
//		scanf_s("%d", &num);
//	} while (num != -1);
//
//	//3. while ~ break
//	/*while (1)
//	{
//		printf("-1 입력시 종료: ");
//		scanf_s("%d", &num);
//		if (num == -1) break;
//	}
//	printf("프로그램을 종료합니다.\n");*/
//
//	//문자 입력시 오류 처리
//	//while (1)
//	//{
//	//	printf("-1 입력시 종료: ");
//	//	if (scanf_s("%d", &num) != 1) {
//	//		while (getchar() != '\n');
//	//		printf("잘못된 입력입니다.\n");
//	//		continue;
//	//	}
//
//	//	// -1이 입력되면 종료
// //       if (num == -1) {
// //           printf("프로그램을 종료합니다.\n");
// //           break;
// //       }
//	//}
//
//	return 0;
//}
