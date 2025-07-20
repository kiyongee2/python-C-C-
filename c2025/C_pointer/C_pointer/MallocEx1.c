//#include <stdio.h>
//#include <stdlib.h> //malloc(), free() 함수
//
//int main()
//{
//	//크기가 5인 정수형 배열 선언 - 정적 할당
//	int n[5];
//
//	//크기가 5인 정수형 배열 선언 - 동적 할당
//	int* pn = (int *)malloc(sizeof(int) * 5);
//	if (pn == NULL){
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1);
//	}
//
//	/*pn[0] = 2;
//	pn[1] = 4;*/
//
//	//2의 배수 저장
//	for (int i = 0; i < 5; i++){
//		pn[i] = (i + 1) * 2;
//	}
//
//	for (int i = 0; i < 5; i++){
//		printf("%d ", pn[i]); //2 4 6 8 10
//	}
//
//	free(pn); //메모리 반납
//
//	return 0;
//}
//
