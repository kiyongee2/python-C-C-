//#include <stdio.h>
//
//int main()
//{
//	//���ڿ��� ������
//	char msg[] = "Good Luck";
//	char* p = msg;  //&�� ���� ����
//	int i;
//
//	printf("%s\n", msg);
//
//	printf("���ڿ� �迭�� ũ��: %d\n", sizeof(msg));
//	printf("������ �������� ũ��: %d\n", sizeof(p));
//
//	printf("���ڿ� �迭�� ����Ű�� �޸� �ּ�: %x\n", msg);
//	printf("������ �����Ͱ� ����Ű�� �޸� �ּ�: %x\n", p);
//
//	for (i = 0; msg[i] != NULL; i++) //���ڿ� �迭 �̸� ���
//	{
//		printf("%c", msg[i]);
//	}
//	printf("\n");
//
//	for (i = 0; p[i] != NULL; i++) //���ڿ� ������ ���� ���
//	{
//		printf("%c", p[i]);
//	}
//	printf("\n");
//
//	for (i = 0; *(p + i) != NULL; i++)
//	{
//		printf("%c", *(p + i));
//	}
//	printf("\n");
//
//	return 0;
//}