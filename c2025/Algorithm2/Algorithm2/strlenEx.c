//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int str_len(const char* s) {
//	int len = 0;
//
//	while (s[len] != '\0') //s[len]�� ����
//		len++;
//	return len;
//}
//
//int str_len2(const char* s) {
//	int len = 0;
//
//	while (*s++) //*s++ != '\0'�� ����
//		len++;
//	return len;
//}
//
//int main()
//{
//	char a[] = "DOG";
//	char* b = "DOG";
//
//	//���ڿ� ����
//	printf("%s %d\n", a, strlen(a)); //DOG 3
//	printf("%s %d\n", b, strlen(b)); //DOG 3
//
//	//�ε��� �˻�
//	printf("%c\n", b[0]);
//	printf("%c\n", b[1]);
//	printf("%c\n", b[2]);
//
//	char str[256];
//
//	printf("���ڿ�: ");
//	scanf("%s", str);
//
//	printf("�� ���ڿ��� ���̴� %d�Դϴ�.\n", str_len(str));
//
//	return 0;
//}
