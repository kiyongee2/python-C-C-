//#include <stdio.h>
//
//int main()
//{
//	//순차 탐색
//	int a[9] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
//	int i;
//	int x = 6;  //찾을 값
//	int found = 0; //상태(찾음, 못찾음)
//
//	for (i = 0; i < 9; i++) {
//		if (a[i] == x) {
//			printf("%d은 a[%d]에 있습니다.\n", x, i);
//			found = 1; //찾음
//			break;  //더 이상 찾을 필요 없음!!
//		}
//	}
//	
//	if (!found) {
//		printf("%d은 없습니다.\n");
//	}
//
//	return 0;
//}