//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
//int main() {
//
//	int* score;
//	int n;
//	printf("�л��� �Է� : ");
//	scanf_s("%d", &n);
//
//	score = (int*)malloc(n * sizeof(int));  //���� �� ���� �Ҵ�
//
//	//int score[n];
//	printf("%p\n", score);
//	printf("%d\n", score);
//
//	free(score);  //score(stack)�� ����Ű�� �޸�(heap) ����
//
//	/*int* p[3];
//	int i, j;
//	int num = 1;
//
//	//p[0] = (int*)malloc(sizeof(int) * 4);
//
//	for (i = 0; i < 3; i++) {
//		p[i] = (int*)malloc(sizeof(int) * 4);
//	}
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			p[i][j] = num++;
//			printf("%4d", p[i][j]);
//		}
//		puts(" ");
//	}
//
//	// �޸� ����
//	for (i = 0; i < 3; i++) {
//		free(p[i]);
//	}*/
//
//	return 0;
//}