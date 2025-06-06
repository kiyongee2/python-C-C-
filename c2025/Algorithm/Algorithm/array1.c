//#include <stdio.h>
//
//int main()
//{
//	int a[5] = { 9, 8, 7, 6, 7 };
//	int i;
//	int count = 0;
//
//	//7이 몇 개인지 세기
//	for (i = 0; i < 5; i++){
//		if (a[i] == 7) {
//			printf("7 발견!\n");
//			count++;
//		}
//	}
//	printf("7을 %d개 발견!\n", count);
//
//	//7을 하나 발견하면 종료
//	int sw = 0;  //상태(토글) 변수
//	for (i = 0; i < 7; i++) {
//		if (a[i] == 7) {
//			printf("7 발견!\n");
//			sw = 1;
//			break;
//		}
//	}
//
//	if(!sw)
//		printf("7을 발견 못함!\n");
//
//	return 0;
//}
