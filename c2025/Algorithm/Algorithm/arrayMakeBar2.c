#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  //malloc(), free()
#include <stdbool.h> //true/false 사용

/*
  - 배열의 수치를 막대 그래프로 그리는 프로그램
	***
	******
	****
	**
*/
int main()
{
	//동적 메모리 할당
	int* arr = NULL; //포인터 선언
	int size;  //배열의 크기
	int i, j;

	printf("배열의 크기 입력: ");
	scanf("%d", &size);

	arr = (int*)malloc(sizeof(int) * size);
	if (arr == NULL) {
		puts("메모리 할당에 실패했습니다.\n");
		return 1;
	}

	// 사용자 값 입력 및 유효성 검사
	for (i = 0; i < size; i++) {
		while (true) {
			printf("arr[%d] 값 입력 (0 이상 정수): ", i);
			if (scanf("%d", &arr[i]) != 1 || arr[i] < 0) {
				printf("잘못된 입력입니다. 다시 입력하세요.\n");

				// 입력 버퍼 비우기
				while (getchar() != '\n');
			}
			else { //scanf("%d", &arr[i]) == 1
				break; //값 입력후 while문 빠져나옴
			}
		}
	}
	printf("\n");
	/*
	   i=0, arr[0]=3, i++ , ***
	   i=1, arr[1]=6, i++ , ******
	   i=2, arr[1]=f, 잘못된 입력입니다.
	   i=2, arr[2]=4, i++ , ****
	   i=3, arr[3]=2, i++ , **
	   i=4, 반복 종료
	*/

	//막대 그래프 출력
	for (i = 0; i < size; i++) {
		printf("arr[%d]=%d|", i, arr[i]);
		for (j = 1; j <= arr[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	free(arr); //메모리 반납

	return 0;
}