//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int str_char(const char* s, int c) {
//	int i = 0;
//	c = (char)c;
//	while (s[i] != c) {
//		if (s[i] == '\0')
//			return -1;  //�˻� ����
//		i++;
//	}
//	return i;  //�˻� ����
//}
//
//
//int main()
//{
//	char str[128]; //�� ���ڿ����� �˻�
//	char tmp[128];
//	int ch;        //�˻��� ����
//	int idx;
//
//	printf("���ڿ�: ");
//	scanf("%s", str);
//
//	printf("�˻��� ����: ");
//	scanf("%s", tmp); //���� ���ڿ��� �˻��� ���ڸ� ����
//	ch = tmp[0];      //ù ��° ���ڸ� �˻��� ���ڷ� ����
//
//	if ((idx = str_char(str, ch)) == -1)
//		printf("���� '%c'��(��) ���ڿ��� �����ϴ�.\n", ch);
//	else
//		printf("���� '%c'��(��) %d��°�� �ֽ��ϴ�.\n", ch, idx+1);
//
//	return 0;
//}
