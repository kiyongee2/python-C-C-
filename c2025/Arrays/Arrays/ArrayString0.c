//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//
//	char str[] = "Hello";
//	int num[] = { 1, 2, 3, 4 };
//
//	printf("���� �迭�� �Ҵ�� �޸��� ũ�� : %d����Ʈ\n", sizeof(str));
//	printf("���� �迭�� �Ҵ�� �޸��� ũ�� : %d����Ʈ\n", sizeof(num));
//
//	//ù��° ��� ���
//	printf("%c\n", str[0]);  //H
//	printf("%d\n", num[0]);  //H
//
//	//�迭�� ũ��
//	int size1 = sizeof(str) / sizeof(str[0]);  // 6 / 1 = 6
//	int size2 = sizeof(str) / sizeof(num[0]);  // 16 / 4 = 4
//
//	//'\0' NULL���ڴ� ���ڿ�(�迭)�� ���� �ǹ���(�ʼ�)
//	//char msg1[9] = "Thank you"; 
//	char msg2[9] = { 'T', 'h', 'a', 'n', 'k', ' ', 'y', 'o', 'u'};
//	char msg3[] = { 'T', 'h', 'a', 'n', 'k', ' ', 'y', 'o', 'u' ,'\0'};
//
//	//printf("%s\n", msg1);
//	printf("%s\n", msg2);
//	printf("%s\n", msg3);
//
//	return 0;
//}