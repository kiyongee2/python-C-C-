//#include <stdio.h>
//
//int main()
//{
//	int arr[5];    //�迭 ����
//	int idx = 0;   //�迭�� �ε���
//	int min = 999; //�ּҰ� ����
//
//	while (idx < 5)
//	{
//		printf("%d��°�� �� �Է�: ", idx + 1);
//		/*scanf_s("%d", &arr[idx]);
//		  idx++; */
//
//		//���� �Է½� ���� ó��
//		if (scanf_s("%d", &arr[idx]) == 1) 
//		{
//			if (arr[idx] < min)
//				min = arr[idx];
//			idx++; //�ε��� 1����
//		}
//		else
//		{
//			puts("�߸��� �Է��Դϴ�! ���ڸ� �Է��ϼ���.");
//			while (getchar() != '\n'); //�Է� ���� ���� 
//			continue; //while�� ó������ ���ư�
//		}
//	}
//	printf("�ּҰ��� %d\n", min);
//
//	return 0;
//}
