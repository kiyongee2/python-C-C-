//#include <stdio.h>
//
//int main()
//{
//	char msg[] = "Good Luck";
//	char* p = msg;
//	int i;
//
//	//���ڿ� ���
//	printf("%s\n", msg);
//
//	//���ڿ��� �� �ڿ� '\0' ����, �����ʹ� 8byte
//	printf("%d %d\n", sizeof(msg), sizeof(p));
//
//	//���ڿ��� ���� �ּҿ� �迭�� �̸��� �����ϴ�.
//	printf("%x %x\n", msg, p);
//
//	//�����ͷ� ���
//	/*printf("%s\n", p); //p + 0�� ����
//	printf("%s\n", p + 1); 
//	printf("%s\n", p + 2); 
//	printf("%s\n", p + 3); */
//
//	//������ �������� ���
//	printf("%c\n", *p);
//	printf("%c\n", *(p + 1));
//	printf("%c\n", *(p + 2));
//	printf("%c\n", *(p + 3));
//
//	int size = sizeof(msg) / sizeof(msg[0]);
//
//	//���ڷ� ���
//	for (i = 0; i < size; i++)
//	{
//		printf("%c", *(p + i));
//	}
//
//	return 0;
//} 