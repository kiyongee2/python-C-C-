//#include <stdio.h>
//
//int main()
//{
//	//���ڿ��� ������
//	char msg[] = "Good Luck";
//	char* p = msg;
//	int i;
//
//	printf("%s\n", msg);
//
//	printf("���ڿ��� ũ��: %dByte\n", sizeof(msg));
//	printf("���ڿ� �������� ũ��: %dByte\n", sizeof(p));
//
//	printf("���ڿ� �迭�� ����Ű�� �޸� ����: %x\n", msg);
//	printf("���ڿ� �����Ͱ� ����Ű�� �޸� ����: %x\n", p);
//
//	printf("%s\n", p);
//	printf("%s\n", p + 1);  //���� ���� ���
//	printf("%s\n", p + 2);
//	printf("%s\n", p + 3);
//
//	printf("======================\n");
//
//	//���ڿ��� ũ��
//	printf("%d %d\n", sizeof(msg), sizeof(msg[0]));
//	int size = sizeof(msg) / sizeof(msg[0]);
//	printf("%d\n", size);
//
//	// ������ ������ ���
//	printf("%c\n", *p);  //*(p + 0)
//	printf("%c\n", *(p + 1));
//	printf("%c\n", *(p + 2));
//	printf("%c\n", *(p + 3));
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%c", *(p + i));
//	}
//
//	printf("\n\n");
//
//	return 0;
//}