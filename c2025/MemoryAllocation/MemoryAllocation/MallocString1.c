//#include <stdio.h>
//#include <string.h> //strlen(), strcpy_s()
//#include <stdlib.h> //malloc(), free()
//
//void delBlank(char[]);
//int main()
//{
//	char a[] = "A B c D e F !";
//	delBlank(a);
//	printf("%s\n", a);
//
//	return 0;
//}
//
//void delBlank(char a[]) 
//{
//	int len = strlen(a);
//	char* str;  //������(���� �Ҵ�)
//	int i, k = 0;
//
//	str = (char*)malloc(sizeof(char) * len);
//	if (str == NULL) {
//		printf("���� �޸� �Ҵ翡 ������\n");
//		return 1;
//	}
//
//	//���鹮�� ������ ����
//	for (i = 0; i < len; i++)
//	{
//		if (a[i] != ' ') //a[i] ���鹮�ڰ� �ƴϸ� 
//			str[k++] = a[i];
//	}
//	str[k] = '\0'; //���ڿ� �ǵ� �ι���
//
//	//strcpy(a, str);  //str�� a�� ����
//	strcpy_s(a, sizeof(a), str);
//
//	free(str);
//}
