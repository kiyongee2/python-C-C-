//#include <stdio.h>
//#include <stdlib.h>  //malloc() ���
//
//int main()
//{
//	char* pc;
//	int i;
//	pc = (char *)malloc(sizeof(char) * 26);
//
//	if (pc == NULL)
//	{
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1);
//	}
//
//	//*pc = 'A';  //*(pc + 0)
//	//*(pc + 1) = 'B';
//	//
//	//printf("%c\n", *pc);
//	//printf("%c\n", *(pc + 1));
//	
//	//����
//	for (i = 0; i < 26; i++)
//	{
//		*(pc + i) = 'A' + i;
//	}
//
//	//���
//	for (int i = 0; i < 26; i++)
//	{
//		printf("%2c", *(pc + i));
//	}
//
//	free(pc);  //�޸� ���� 
//
//	return 0;
//}
