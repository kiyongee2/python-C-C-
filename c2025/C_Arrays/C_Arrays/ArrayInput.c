//#include <stdio.h>
//#define MAX_LEN 4
//
//int main()
//{
//	int scores[MAX_LEN];
//	int idxOfScores = 0;
//
//	while (idxOfScores < MAX_LEN) {
//		printf("���� �Է�: ");
//		//scanf_s("%d", &scores[idxOfScores]);
//
//		if (scanf_s("%d", &scores[idxOfScores]) != 1)
//		{
//			puts("�߸��� �Է��Դϴ�! ���ڸ� �Է��ϼ���.");
//			while (getchar() != '\n'); // �Է� ���� ����
//			continue;
//		}
//		idxOfScores++;
//
//		/*if (scanf_s("%d", &scores[idxOfScores]) == 1)
//		{
//			idxOfScores++;
//		}
//		else {
//			puts("�߸��� �Է��Դϴ�! ���ڸ� �Է��ϼ���.");
//			while (getchar() != '\n'); // �Է� ���� ����
//			continue;
//		}*/
//	}
//	puts("�� �̻� �߰��� �� ����!");
//
//	for (int i = 0; i < idxOfScores; i++)
//	{
//		printf("%-4d", scores[i]);
//	}
//
//	return 0;
//}