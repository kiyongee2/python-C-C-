//#include <stdio.h>
//
//int main()
//{
//	char a1[] = "NET";
//	char a2[4];
//
//	printf("%c\n", a1[0]);
//	printf("%c\n", a1[1]);
//	printf("%c\n", a1[3]); //NULL ����
//	printf("%c\n", a1[2]);
//
//	//a1�� a2�� ����
//	for (int i = 0; i < 4; i++)
//	{
//		a2[i] = a1[i];
//	}
//
//	//a2�� ���ڷ� ���
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%c", a2[i]);
//	}
//	printf("\n");
//
//	//a2�� ���ڿ��� ���
//	printf("%s\n", a2);
//	printf("===========\n");
//
//	//a1�� a2�� �Ųٷ� �����ϱ�(NET -> TEN)
//	for (int i = 0; i < 4; i++)
//	{
//		a2[i] = a1[2 - i];
//	}
//	a2[3] = '\0'; 
//
//	//a2�� ���ڿ��� ���
//	printf("%s\n", a2);
//
//	return 0;
//}