//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 41, 36, 8, 77, 15 };
//	int i, j, temp;
//	
//	//�񱳿� ��ȯ �ݺ�
//	for (i = 0; i < 4; i++) {
//		int minIdx = i;  //���� ��ġ(��)�� �ּҰ����� ����
//		for (j = i + 1; j < 5; j++) {
//			if (arr[j] < arr[minIdx])
//				minIdx = j; //���� �ּҰ� ��ġ ����
//		}
//
//		//��ȯ ó��
//		temp = arr[i];
//		arr[i] = arr[minIdx];
//		arr[minIdx] = temp;
//	}
//
//	//���� �� ���
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}