//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int arr[] = { 41, 8, 36, 77, 15 };
//	int size, i, j;
//	//int rank[] = { 1, 1, 1, 1, 1 };
//	int* rank;
//
//	size = sizeof(arr) / sizeof(arr[0]);
//	rank = (int*)malloc(sizeof(int) * size);
//
//	//비교후 순위 결정
//	for (i = 0; i < size; i++){
//		rank[i] = 1;
//		for (j = 0; j < size; j++) {
//			if (arr[i] < arr[j]) {
//				//rank[i] = rank[i] + 1;
//				rank[i]++;
//			}
//		}
//	}
//
//	/*
//	   arr[i]	더 큰 값 개수  	rank[i]
//		41	    1(77)	           2
//		8	    4(41,36,77,15)     5
//		36	    2(41,77)	       3
//		77	    0	               1
//		15	    3(41,36,77)	       4
//	*/
//
//	//순위 출력
//	for (i = 0; i < size; i++) {
//		printf("%d ", rank[i]); //2 5 3 1 4
//	}
//
//	free(rank);
//
//	return 0;
//}