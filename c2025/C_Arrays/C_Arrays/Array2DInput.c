//#include <stdio.h>
//
//int main()
//{
//	int score[4][2];
//	int total[2] = { 0, 0 }; //����, ���� ����
//
//	printf("*** ����, ������ ������ ��� ***\n");
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d�� �л��� ���� ����: ", i + 1);
//		scanf_s("%d", &score[i][0]);
//		printf("%d�� �л��� ���� ����: ", i + 1);
//		scanf_s("%d", &score[i][1]);
//	}
//
//	//���� ���
//	for (int i = 0; i < 4; i++)
//	{
//		total[0] += score[i][0];
//		total[1] += score[i][1];
//	}
//
//	printf("���� ���: %d\n", total[0]);
//	printf("���� ���: %d\n", total[1]);
//
//	/*printf("���� ���: %.1f\n", total[0] / 4.0);
//	printf("���� ���: %.1f\n", total[1] / 4.0);*/
//
//	printf("���� ���: %.1f\n", (float)total[0] / 4);
//	printf("���� ���: %.1f\n", (float)total[1] / 4);
//
//	return 0;
//}