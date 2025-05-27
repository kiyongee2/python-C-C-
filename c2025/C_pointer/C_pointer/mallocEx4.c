//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* ip;
//	int i;
//
//	ip = (int *)malloc(sizeof(int) * 4);
//
//	if (ip == NULL) {
//		printf("동적 메모리 할당에 실패함\n");
//		exit(0);
//	}
//
//	ip[0] = 10;
//	ip[1] = 20;
//	ip[2] = 30;
//	ip[3] = 40;
//
//	/*for (i = 0; i < 4; i++) {
//		printf("%d\n", ip[i]);
//	}*/
//
//	for (i = 0; i < 4; i++) {
//		printf("%d\n", *(ip + i));
//	}
//
//	//값 변경
//	*ip = 50;
//	*(ip + 1) = 60;
//	*(ip + 2) = 70;
//	*(ip + 3) = 80;
//
//	for (i = 0; i < 4; i++) {
//		printf("%d %d\n", ip[i], *(ip + i));
//	}
//
//	return 0;
//}
