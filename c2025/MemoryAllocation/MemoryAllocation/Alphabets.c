//#include <stdio.h>
//#include <stdlib.h> //malloc(), free()
//
//int main()
//{
//	//�迭 - ���� �Ҵ�(�޸� - �� ����)
//	char* pc;
//	pc = (char *)malloc(sizeof(char) * 26);
//	int i;
//
//	if (pc == NULL)
//	{
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1); //���� ����
//	}
//	
//	/*
//		//*pc = 'A';
//		*(pc + 0) = 'A';
//		printf("%c\n", *(pc + 0));
//
//		*(pc + 1) = 'A' + 1;
//		printf("%c\n", *(pc + 1));
//
//		*(pc + 2) = 'A' + 2;
//		printf("%c\n", *(pc + 2));
//	*/  
//
//	//����
//	for (i = 0; i < 26; i++)
//	{
//		*(pc + i) = 'A' + i;
//	}
//
//	//���
//	for (i = 0; i < 26; i++)
//	{
//		printf("%c ", *(pc + i));
//	}
//
//	free(pc); //�޸� ����
//
//	return 0;
//}