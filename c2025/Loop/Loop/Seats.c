//#include <stdio.h>
//
//int main()
//{
//	/*
//		�ڸ���ġ�� �����
//	*/
//	int customer;  //���尴
//	int column;    //�¼� ��
//	int row;       //��(��)
//
//	printf("���尴 �� �Է�: ");
//	scanf_s("%d", &customer);
//
//	printf("�¼��� �� �Է�: ");
//	scanf_s("%d", &column);
//
//	if (customer % column == 0) //������ ������
//	{
//		row = customer / column; //�⺻�� int����
//	}
//	else
//	{
//		row = (int)(customer / column) + 1;
//	}
//	printf("%d���� ���� �ʿ��մϴ�.\n", row);  
//	
//	/*for (int i = 0; i < row; i++)
//	{
//		for (int j = 1; j <= column; j++)
//		{
//			int seatNum = i * column + j;  //�¼� ��ȣ
//			if (seatNum > customer) 
//				break;
//			printf("�¼�%d ", seatNum);
//		}
//		printf("\n");
//	}*/
//
//	return 0;
//}
