//#include <stdio.h>
//#include <stdlib.h> //malloc(), free()
//
//void delBl(char[]);
//int main()
//{
//	char a[] = "A B c D e F !";
//	delBl(a);
//	printf("%s\n", a);
//
//	return 0;
//}
//
//void delBl(char a[]) 
//{
//	int len = strlen(a);
//	char* str = (char *)malloc(sizeof(char) * len);
//	int i, k = 0;
//
//	for (i = 0; i < len; i++)
//	{
//		if (a[i] != ' ') //a[i] ���鹮�ڰ� �ƴϸ� 
//			str[k++] = a[i];
//	}
//	str[k] = '\0';
//	strcpy(a, str);
//
//	free(str);
//}
//
