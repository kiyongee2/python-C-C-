//#include <stdio.h>
//#include <stdlib.h>  //malloc() ���
//
//int main()
//{
//	int num1 = 10;
//	int* ptr1;
//	int* ptr2;
//
//	ptr1 = &num1;  //���� �Ҵ�(�޸� ���ÿ���)
//	//���� �Ҵ�(�� ����) 
//	ptr2 = (int*)malloc(sizeof(int) * 3);
//	if (ptr2 == NULL)
//	{
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1); //���� ����
//	}
//	ptr2[0] = 11;
//	ptr2[1] = 12;
//	printf("%d %x\n", *ptr1, ptr1);  
//	printf("%d %x\n", *ptr2, ptr2);  //*(ptr2 + 0)
//
//	free(ptr2);  //�޸� ���� 
//
//	return 0;
//}
