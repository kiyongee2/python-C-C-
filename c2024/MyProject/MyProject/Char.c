//#include <stdio.h>
//
//int main()
//{
//	//C���� �ƽ�Ű(Ascii) �ڵ� ü���̹Ƿ� �ѱ��� ǥ���� ��
//	//��� �迭�� ǥ���ؾ� ��
//	//char ch = '��';  //����(2Byte)
//	char ch2[] = "��";  //����(2Byte), �� �ڿ� '\0' -�ι��� ����
//	char str[] = "�ѱ�";  //���ڿ�(5Byte)
//
//	//printf("%u\n", ch);
//	printf("%s %d\n", ch2, sizeof(ch2));
//	printf("%s %d\n", str, sizeof(str));
//
//	char c1, c2, c3, c4;
//
//	c1 = 'B';
//	c2 = c1 + 1;
//	c3 = c1 - 1;
//	c4 = c1 + ('a' - 'A');  //�ҹ��ڷ� ��ȯ
//
//	printf("%c\n", c1);
//	printf("%c\n", c2);
//	printf("%c\n", c3);
//	printf("%c\n", c4);
//
//	//int, char
//	int n = 321;  //110000001 -> 9��Ʈ
//	char c = 'A';
//
//	printf("%d\n", n);
//	printf("%c\n", n);  //'A' -> 65 ���� 1��Ʈ�� �����.
//
//	printf("%d\n", c);
//	printf("%c\n", c);
//
//	//unsigned
//	char cc = 128;  //��ȣ �ִ� ������
//	unsigned char ccc = 128; //��ȣ ���� ������
//
//	printf("%c\n", cc);
//	printf("%d\n", cc);
//
//	printf("%c\n", ccc); 
//	printf("%d\n", ccc); 
//
//
//	return 0;
//}