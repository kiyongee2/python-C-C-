//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
//int main() {
//
//	int num1 = 10;
//	int* ptr1;  //���� ������ ��ġ��
//	int* ptr2;  //�� ������ ��ġ��
//
//	ptr1 = &num1;
//
//	//������ �迭 3����Ʈ ����
//	ptr2 = (int*)malloc(sizeof(int) * 3); 
//	if (ptr2 == NULL)
//	{
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1);  //���� ����
//	}
//
//	printf("%p\n", ptr1);
//	printf("%p\n", ptr2);
//
//	free(ptr2);
//
//	return 0;
//}
