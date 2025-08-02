//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 9, 8, 6, 7, 6 };
//	int i;
//	int count = 0;
//
//	//7이 몇 개인지 세기
//	for (i = 0; i < 5; i++){
//		if (arr[i] == 6) {
//			printf("6 발견!\n");
//			count++;
//		}
//	}
//	printf("6을 %d개 발견!\n", count);
//	printf("--------------------\n");
//
//	//7을 하나 발견하면 종료
//	int sw = 0;  //상태(토글) 변수
//	for (i = 0; i < 5; i++) {
//		if (arr[i] == 6) {
//			printf("6 발견!\n");
//			sw = 1;
//			break;
//		}
//	}
//
//	if(!sw)
//		printf("6을 발견 못함!\n");
//	 
//	return 0;
//}
