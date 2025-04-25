//#include <stdio.h>
//#define MAX_LEN 4
//
//int main()
//{
//	//배열의 크기가 4인 carts 생성
//	int carts[MAX_LEN];
//	int idxOfCarts = 0; //배열의 인덱스
//
//	//요소 추가
//	if (idxOfCarts < MAX_LEN) 
//		carts[idxOfCarts++] = 80;
//	if (idxOfCarts < MAX_LEN) 
//		carts[idxOfCarts++] = 70;
//	if (idxOfCarts < MAX_LEN) 
//		carts[idxOfCarts++] = 95;
//	if (idxOfCarts < MAX_LEN)
//		carts[idxOfCarts++] = 80;
//
//	//요소 삭제
//	if (idxOfCarts > 0) 
//		idxOfCarts--;
//	if (idxOfCarts > 0) 
//		idxOfCarts--;
//	if (idxOfCarts > 0) 
//		idxOfCarts--;
//	//if (idxOfCarts > 0) idxOfCarts--;
//
//	// 출력
//	printf("현재 배열 상태:\n");
//	if (idxOfCarts == 0) {
//		printf("(비어 있음)\n");
//	}
//	else {
//		printf("남은 요소 수: %d\n", idxOfCarts);
//		for (int i = 0; i < idxOfCarts; i++) {
//			printf("%d\n", carts[i]);
//		}
//	}
//
//	return 0;
//}
