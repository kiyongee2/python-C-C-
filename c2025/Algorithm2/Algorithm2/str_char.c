//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*int str_char(const char* s, int c) {
//	int i = 0;
//	c = (char)c; //�ڵ尪�� ���ڷ� ����ȯ
//	while (s[i] != c) { //s[i] == c, �ݺ�����
//		if (s[i] == '\0')
//			return -1;  //�˻� ����
//		i++;
//	}
//	return i;  //�˻� ����
//}*/
//
//int str_char(const char* s, int c) {
//	int i;
//
//	for (i = 0; s[i] != '\0'; i++) {
//		if (s[i] == (char)c) 
//			return i;  //�˻� ����
//	}
//
//	return -1;  //�˻� ����
//}
//
//
//int main()
//{
//	char str[128]; //�� ���ڿ����� �˻�
//	char tmp[128]; //�˻��� ���� ����
//	int ch;        //�˻��� ����(�ڵ尪)
//	int idx;       //������ ��ġ
//
//	printf("���ڿ�: ");
//	scanf("%s", str);  //���ڿ� �Է�
//
//	printf("�˻��� ����: ");
//	scanf("%s", tmp); //�˻��� ���� �Է�
//	ch = tmp[0];      //ù ��° ���ڸ� �˻��� ���ڷ� ����
//
//	if ((idx = str_char(str, ch)) == -1)
//		printf("���� '%c'��(��) ���ڿ��� �����ϴ�.\n", ch);
//	else
//		printf("���� '%c'��(��) %d��°�� �ֽ��ϴ�.\n", ch, idx+1);
//
//	return 0;
//}
