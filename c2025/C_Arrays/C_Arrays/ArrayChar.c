//#include <stdio.h>
//#define MAX_LEN 4
//
//int main()
//{
//	char c1, c2, c3;
//	c1 = 'a';
//	c2 = c1 + 1;
//	c3 = c2 - 1;
//
//	printf("%c %c\n", c2, c3);
//
//	//26�� ũ�⸦ ���� ������ �迭 ����
//	char alphabets[26];
//	char ch = 'a';
//
//	//����
//	for (int i = 0; i < 26; i++) {
//		alphabets[i] = ch;
//		ch++;
//	}
//	//a ~ z�� �ƽ�Ű �ڵ尪 ���
//	for (int i = 0; i < 26; i++) {
//		printf("%c %d\n", alphabets[i], alphabets[i]);
//	}
//
//	char fr1[] = "apple";  //�� �ڿ� ��(NULL)���� ����
//	char fr2[] = {'a', 'p', 'p', 'l', 'e', '\0'};
//	char fr3[] = "���";
//
//	//sizeof() - �ڷ����� ũ�⸦ ����Ʈ ������ ��ȯ('\0' ����)
//	printf("%s %d\n", fr1, sizeof(fr1));
//	printf("%s %d\n", fr2, sizeof(fr2));
//	printf("%s %d\n", fr3, sizeof(fr3));
//
//	return 0;
//}