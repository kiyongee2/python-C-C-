//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int num1 = 10;
//	int* ptr1;
//	int* ptr2;
//
//	//���� �Ҵ�(�޸� ���ÿ���)
//	ptr1 = &num1;  
//	//���� �Ҵ�(�޸� ������)
//	ptr2 = (int* )malloc(sizeof(int) * 3); 
//
//	ptr2[0] = 11;
//	ptr2[1] = 12;
//	ptr2[2] = 13;
//
//	//ptr1�� ���� �ּ�
//	printf("%d %p\n", *ptr1, ptr1);
//	printf("\n");
//
//	//ptr2�� ���� �ּ�
//	for (int i = 0; i < 3; i++) {
//		printf("%d %p\n", *(ptr2 + i), ptr2 + i);
//	}
//	free(ptr2);  //�޸� ����
//
//	return 0;
//}
