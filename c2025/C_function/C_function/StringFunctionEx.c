//#define _CRT_SECURE_NO_WARNINGS //strcpy() ó��
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char msg1[] = "Good Luck!";
//	char msg2[20];
//	int len;
//
//	//���ڿ��� ����
//	len = strlen(msg1);
//	printf("%d\n", len);
//
//	//���ڿ��� ����
//	//strcpy(msg2, msg1); //strcpy(���纻, ����)
//	//sizeof(msg2) - ���� �����÷ο� ����
//	strcpy_s(msg2, sizeof(msg2), msg1);  
//	printf("%s\n", msg2);
//
//	//���ڿ��� ��
//	char greet1[] = "hello";
//	char greet2[] = "Hello";
//	int result;
//
//	//0 - ��ġ, 1 - ����ġ
//	//��ҹ��� ������
//	result = strcmp(greet1, greet2);
//	printf("%d\n", result);
//
//	if (result == 0)
//	{
//		puts("���ڿ��� ��ġ�մϴ�.");
//	}
//	else
//	{
//		puts("���ڿ��� ��ġ���� �ʽ��ϴ�.");
//	}
//
//	return 0;
//}
