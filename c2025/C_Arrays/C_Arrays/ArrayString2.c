//#include <stdio.h>
//
//int main()
//{
//	//�ܾ� ����
//	char words[4][10] = { "flower", "tree", "sun", "moon" };
//
//	//Ư�� �ܾ� ��ȸ
//	printf("%s\n", words[0]);
//	printf("%s\n", words[1]);
//	printf("%s\n", words[2]);
//	printf("%s\n", words[3]);
//	printf("\n");
//
//	int size = sizeof(words) / sizeof(words[0]);
//
//	//���ڿ� ���
//	for (int i = 0; i < size; i++)
//	{
//		printf("%s\n", words[i]);
//	}
//	printf("\n");
//
//	//���ڷ� ���
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < words[i][j] != NULL; j++)
//		{
//			printf("%c", words[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}