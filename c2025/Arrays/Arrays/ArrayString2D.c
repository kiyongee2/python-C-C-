//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	//1���� �迭 - ���ڿ�
//	char greet[] = "hello";
//	int i, j;
//
//	printf("%s\n", greet);
//
//	//2���� �迭 - words[�ܾ��� ����][�ִ� ������ ��]
//	char words[3][10] = { 
//		"sun", 
//		"moon", 
//		"earth"
//	};
//	int i, j;
//
//	//Ư�� �ܾ� ��ȸ
//	printf("%s\n", words[0]);
//	printf("%s\n", words[1]);
//	printf("%s\n", words[2]);
//
//	printf("\n=====================\n");
//
//	//��� ��ü ��ȸ(���ڿ��� ���)
//	int size = sizeof(words) / sizeof(words[0]); //����� ����
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%s\n", words[i]);
//	}
//
//	//��� ��ü ��ȸ(���ڷ� ���)
//	for (i = 0; i < size; i++)
//	{
//		for (j = 0; words[i][j] != NULL; j++)
//		{
//			printf("%c", words[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("\n=====================\n");
//
//	//���ڿ� �����ͷ� �ܾ� �����ϱ�
//	char* animals[] = {"ant", "bear", "chicken", "deer", "elephant"};
//	int len = sizeof(words) / sizeof(words[0]);
//
//	//Ư�� �ܾ� ����
//	/*printf("%s\n", animals[0]);
//	printf("%s\n", animals[2]);*/
//
//	//��ü ��ȸ
//	for (int i = 0; i < len; i++)
//	{
//		printf("%s\n", animals[i]);
//	}
//
//	return 0;
//}