//#include <stdio.h>
//
//int main()
//{
//	int score[5] = { 85, 75, 90, 75, 80 };
//	int sum = 0;   //����
//	double avg;    //���
//	int min, max;  //�ּ�, �ִ�
//
//	int size = sizeof(score) / sizeof(score[0]);
//	printf("�迭�� ũ��: %d\n", size);
//
//	for (int i = 0; i < size; i++) {
//		sum += score[i];
//		printf("score[%d]=%d, sum=%d\n", i, score[i], sum);
//	}
//	avg = (double)sum / 4;
//	printf("�հ�: %d, ���: %.1lf\n", sum, avg);
//
//	//�ּҰ�
//	min = score[0]; //ù��° ��Ҹ� �ּҰ����� ����
//	for (int i = 0; i < 4; i++) {
//		if (score[i] < min)  //��Ұ��� �ּҰ����� ������
//			min = score[i];  //��Ұ��� �ּҰ��� ����
//	}
//
//	//�ִ밪
//	max = score[0];
//	for (int i = 0; i < 4; i++) {
//		if (score[i] > max)
//			max = score[i];
//	}
//	printf("�ּҰ�: %d, �ִ밪:  %d\n", min, max);
//
//	return 0;
//}