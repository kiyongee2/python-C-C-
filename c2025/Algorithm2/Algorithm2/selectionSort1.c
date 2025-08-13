#include <stdio.h>

int main()
{
	int arr[5] = { 41, 36, 8, 77, 15 };
	int i, j, temp;
	
	for (i = 0; i < 4; i++) {
		int minIdx = i;  //���� ��ġ(��)�� �ּҰ����� ����
		for (j = i + 1; j < 5; j++) {
			if (arr[j] < arr[minIdx])
				minIdx = j; //���� �ּҰ� ��ġ ����
		}
		//��ȯ ó��
		temp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = temp;
	}

	//���� �� ���
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	/*
	    {41, 36, 8, 77, 15}
		1ȸ�� (i=0)
		minIdx = 0 (41)
		�ڿ��� �ּҰ� Ž�� �� 8�� ���� ���� (minIdx = 2)
		��ȯ �� {8, 36, 41, 77, 15}

		2ȸ�� (i=1)
		minIdx = 1 (36)
		�ڿ��� �ּҰ� Ž�� �� 15 (minIdx = 4)
		��ȯ �� {8, 15, 41, 77, 36}

		3ȸ�� (i=2)
		minIdx = 2 (41)
		�ڿ��� �ּҰ� Ž�� �� 36 (minIdx = 4)
		��ȯ �� {8, 15, 36, 77, 41}

		4ȸ�� (i=3)
		minIdx = 3 (77)
		�ڿ��� �ּҰ� Ž�� �� 41 (minIdx = 4)
		��ȯ �� {8, 15, 36, 41, 77}
	*/

	return 0;
}