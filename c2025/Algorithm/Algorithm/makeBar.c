//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*
//  - 배열의 수치를 막대 그래프로 그리는 프로그램
//	***
//	******
//	****
//	**
//*/
//int main()
//{
//	//int arr[] = { 3, 6, 4, 2 };
//	int arr[4];
//	int i, j;
//
//	//사용자 입력
//	for (i = 0; i < 4; i++) {
//		printf("arr[%d] 입력: ", i);
//		scanf("%d", &arr[i]);
//	}
//	printf("\n");
//	
//    //막대 그래프 출력
//	for (i = 0; i < 4; i++) {
//		printf("arr[%d]=%d|", i, arr[i]);
//		for (j = 1; j <= arr[i]; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	/*
//	   i=0, arr[0]=3, ***
//	   i=1, arr[1]=6, ******
//	   i=2, arr[2]=4, ****
//	   i=3, arr[3]=2, **
//	*/
//
//	return 0;
//}