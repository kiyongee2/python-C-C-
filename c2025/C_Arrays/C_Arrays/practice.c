#include <stdio.h>
/*
   �ǽ� ����
   - �迭 ���̰� 5�� ���� �迭�� �����ϰ�,
   - 1~10�� Ȧ������ �迭�� ������ ��
   - �� �հ� ����� ����ϼ���.
*/
int main()
{
	int arr[5];
	int i;
	int sum = 0;
	float avg;

	//Ȧ�� ����
	for (i = 0; i < 5; i++) {
		arr[i] = i * 2 + 1; //1, 3, 5, 7, 9
		sum += arr[i]; //�հ�
	}
	//Ȧ�� ���
	/*for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}*/

	//���
	avg = (float)sum / 5;

	printf("�հ�: %d\n", sum);
	printf("���: %.1f\n", avg);

	return 0;
}