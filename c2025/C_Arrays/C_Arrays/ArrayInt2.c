#include <stdio.h>

int main()
{
	int arr[5] = { 1, 3, 5, 7, 9 };
	int sum = 0;   //����
	double avg;    //���

	int size = sizeof(arr) / sizeof(arr[0]);
	//printf("�迭�� ũ��: %d\n", size);

	for (int i = 0; i < size; i++) {
		sum += arr[i];
		//printf("arr[%d]=%d, sum=%d\n", i, arr[i], sum);
	}
	avg = (double)sum / 4;
	printf("�հ�: %d\n", sum);
	printf("���: %.1lf\n", avg);

	return 0;
}