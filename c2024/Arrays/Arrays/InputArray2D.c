#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int score[5][2];
	int total[2] = { 0, 0 };
	int i;

	printf("�� �л��� ����� �������� �Է�\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d�� �л��� ���� ����: ", i + 1);
		scanf("%d", &score[i][0]);
		printf("%d�� �л��� ���� ����: ", i + 1);
		scanf("%d", &score[i][1]);
	}
	
	for (i = 0; i < 5; i++) {
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	
	printf("���� �հ�=%d\n", total[0]);
	printf("���� �հ�=%d\n", total[1]);
	printf("���� ���=%.1f\n", (float)total[0] / 5);
	printf("���� ���=%.1f\n", (float)total[1] / 5);

	return 0;
}