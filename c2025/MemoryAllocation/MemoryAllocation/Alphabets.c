//#include <stdio.h>
//#include <stdlib.h> //malloc(), free()
//
//int main()
//{
//	//�迭 - ���� �Ҵ�(�޸� - �� ����)
//	char* pc;
//	int i;
//
//	pc = (char*)malloc(sizeof(char) * 26);
//	if (pc == NULL)
//	{
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1); //���� ����
//	}
//	
//	//*pc = 'A';
//	*(pc + 0) = 'A';
//	printf("%c\n", *(pc + 0)); //A
//
//	*(pc + 1) = 'A' + 1;
//	printf("%c\n", *(pc + 1)); //B
//
//	*(pc + 2) = 'A' + 2;
//	printf("%c\n", *(pc + 2)); //C
// 
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