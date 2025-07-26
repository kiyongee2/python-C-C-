//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
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
//	//동적 메모리 할당
//	int* arr = NULL; //포인터 선언
//	int size;  //배열의 크기
//	int i, j;
//
//	printf("배열의 크기 입력: ");
//	//scanf("%d", &size);
//	if (scanf("%d", &size) != 1 || size <= 0) {
//		printf("올바른 양의 정수를 입력해야 합니다.\n");
//		return 1;
//	}
//
//	arr = (int*)malloc(sizeof(int) * size);
//	if (arr == NULL) {
//		puts("메모리 할당에 실패했습니다.\n");
//		return 1;
//	}
//
//	//사용자 입력
//	/*for (i = 0; i < size; i++) {
//		printf("arr[%d] 입력: ", i);
//		scanf("%d", &arr[i]);
//	}*/
//
//	// 값 입력 및 유효성 검사
//	for (i = 0; i < size; i++) {
//		while (true) {
//			printf("arr[%d] 값 입력 (0 이상 정수): ", i);
//			if (scanf("%d", &arr[i]) != 1 || arr[i] < 0) {
//				printf("잘못된 입력입니다. 다시 입력하세요.\n");
//
//				// 입력 버퍼 비우기
//				while (getchar() != '\n');
//			}
//			else {
//				break;
//			}
//		}
//	}
//
//	//막대 그래프 출력
//	for (i = 0; i < size; i++) {
//		printf("arr[%d]=%d|", i, arr[i]);
//		for (j = 1; j <= arr[i]; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	free(arr);
//
//	return 0;
//}