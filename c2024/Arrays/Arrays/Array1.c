//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//   
//	int arr[] = { 1, 2, 3, 4 };
//
//	//�迭�� �̸��� �迭�� ���� �ּ�
//	printf("%x %x %x\n", &arr[0], &arr[1], &arr[2]);
//	printf("%x %x %x\n", arr, arr+1, arr+2);
//
//	//��� ����(��ȸ)
//	printf("%d\n", arr[0]);
//
//	//��� ����
//	arr[1] = 5;
//
//	//��� ��ü ��ȸ
//	for (int i = 0; i < 4; i++) {
//		printf("%d\n", arr[i]);
//	}
//
//	//����� �հ�
//	int sum = 0;
//	for (int i = 0; i < 4; i++) {
//		sum += arr[i];
//	}
//	printf("�հ�: %d\n", sum);
//
//	//����� ���
//	double avg = 0.0;
//	avg = (double)sum / 4;  //�Ǽ��� ����ȯ
//	printf("���: %.1lf\n", avg);
//
//	//����� �ִ밪
//	int max = arr[0];
//	for (int i = 1; i < 4; i++) {
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("�ִ밪: %d\n", max);
//
//	//�ִ밪�� ��ġ
//	int maxIdx = 0;
//	for (int i = 1; i < 4; i++) {
//		if (arr[i] > arr[maxIdx])
//			maxIdx = i;
//	}
//	printf("�ִ밪�� ��ġ: %d\n", maxIdx);
// 
//   return 0;
//}