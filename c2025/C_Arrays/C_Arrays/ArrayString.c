//#include <stdio.h>
//
//int main()
//{
//	//���ڿ� - 1���� �迭�̴�.
//	char fr1[5] = "apple";  //����
//	char fr2[6] = "apple";  //�� �ڿ� ��(NULL)���� ����
//	char fr3[] = {'a', 'p', 'p', 'l', 'e', '\0'};
//	char fr4[] = "�ٳ���"; //�ѱ��� 1�ڿ� 2byte
//
//	//sizeof() - �ڷ����� ũ�⸦ ����Ʈ ������ ��ȯ('\0' ����)
//	printf("%s %d\n", fr1, sizeof(fr1));
//	printf("%s %d\n", fr2, sizeof(fr2));
//	printf("%s %d\n", fr3, sizeof(fr3));
//	printf("%s %d\n", fr4, sizeof(fr4));
//
//	//���ڿ��� ũ�� �� ���
//	char msg[] = "Good Luck";
//	int size;
//
//	printf("%d %d\n", sizeof(msg), sizeof(msg[0]));
//
//	size = sizeof(msg) / sizeof(msg[0]);
//	printf("%d", size);
//
//	return 0;
//}