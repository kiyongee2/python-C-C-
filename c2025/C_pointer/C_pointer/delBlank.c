//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void delBlank(char a[]);
//int main()
//{
//	char arr[] = "A B c D e F !";
//
//	delBlank(arr); //���鹮�� ���� �Լ� ȣ��
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//void delBlank(char a[]) {
//	  
//	char* str;  //������ ����(���� �Ҵ�)
//	int len;    //�迭�� ũ��
//	int k = 0;
//
//	len = strlen(a);
//	str = (char*)malloc(sizeof(char) * len);
//	if (str == NULL) {
//		printf("���� �޸� �Ҵ翡 ������\n");
//		exit(1);
//	}
//
//	//���鹮�� ������ ����
//	for (int i = 0; i < len; i++) {
//		if (a[i] != ' ')
//			str[k++] = a[i];
//	}
//	str[k] = '\0'; //���ڿ� �� �ڿ� �ι��� ����
//
//	strcpy(a, str); //str�� �迭 a�� ����
//	free(str);
//}
