//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	char greet[] = "hello";
//	int i, j;
//
//	//���ڿ��� ���
//	printf("%s\n", greet);
//
//	//���ڷ� ���
//	for (i = 0; greet[i] != NULL; i++)
//	{
//		printf("%c", greet[i]);
//	}
//
//	printf("\n=====================\n");
//
//	//words[�ܾ��� ����][�ִ� ������ ��]
//	char words[3][10] = { 
//		"sun", 
//		"moon", 
//		"earth"
//	};
//
//	//��� ��ü ��ȸ(���ڷ� ���)
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; words[i][j] != NULL; j++)
//		{
//			printf("%c", words[i][j]);
//		}
//		printf("\n");
//	}
//
//	//printf("\n=====================\n");
//	//��� ��ü ��ȸ(���ڿ��� ���)
//
//	int size = sizeof(words) / sizeof(words[0]); //����� ����
//	printf("%d\n", size);
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%s\n", words[i]);
//	}
//
//	return 0;
//}