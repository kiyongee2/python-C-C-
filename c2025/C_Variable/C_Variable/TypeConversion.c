//#include <stdio.h>
//
//int main()
//{
//	//������ ����ȯ(�ڵ� ����ȯ)
//	int iNum = 20;
//	float fNum = iNum;  //ū �ڷ��� = ���� �ڷ���
//
//	printf("%d\n", iNum);
//	printf("%.1f\n", fNum);
//	printf("%.1f\n", iNum + fNum);
//
//	//����� ����ȯ(���� ����ȯ)
//	double dNum = 2.54;
//	int iNum2 = (int)dNum;  //���� �ڷ��� = ū �ڷ���
//	printf("%d\n", iNum2); //2
//
//	//����
//	dNum = 1.2;
//	fNum = 0.9F;
//
//	iNum = (int)dNum + (int)fNum;  
//	printf("%d\n", iNum); //1
//
//	iNum = (int)(dNum + fNum);  
//	printf("%d\n", iNum); //2
//
//	return 0;
//}