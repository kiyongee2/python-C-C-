//#include <stdio.h>
//
//int main()
//{
//	int arr[4] = { 1, 2, 3, 4 };
//
//	/*arr[0] = 1;
//	arr[1] = 2;
//	arr[2] = 3;
//	arr[3] = 4;*/
//
//	printf("%x %x %x\n", &arr[0], &arr[1], &arr[2]);
//	printf("%x %x %x\n", arr, arr+1, arr+2);
//
//	//����
//	arr[1] = 10;
//
//	//����
//	arr[1] = 0;
//
//	for (int i = 1; i < 3; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//
//	//���
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%-3d", arr[i]);
//	}
//
//	int sum = 0;
//	double avg;
//	int min, max;
//	for (int i = 0; i < 4; i++) {
//		sum += arr[i];
//		printf("arr[%d]=%d, sum=%d\n", i, arr[i], sum);
//	}
//	avg = (double)sum / 4;
//	printf("�հ�: %d, ���: %.1lf\n", sum, avg);
//
//	//�ּҰ�
//	min = arr[0];
//	for (int i = 0; i < 4; i++) {
//		if (arr[i] < min)
//			min = arr[i];
//	}
//
//	//�ִ밪
//	max = arr[0];
//	for (int i = 0; i < 4; i++) {
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("�ּҰ�: %d, �ִ밪:  %d\n", min, max);
//
//	return 0;
//}