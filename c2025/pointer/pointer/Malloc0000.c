//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
//int main() {
//
//	char* pc;
//	int i;
//	pc = (char *)malloc(sizeof(char) * 30);
//	if (pc == NULL)
//	{
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1);
//	}
//
//	for (i = 0; i < 26; i++)
//	{
//		*(pc + i) = 'a' + i;
//	}
//	*(pc + i) = '\0';  //�� �ڿ� NULL �߰�
//
//	printf("%s", pc);
//
//	free(pc);
//
//	return 0;
//}