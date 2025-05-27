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
//	char* str = (char *)malloc(sizeof(char) * len);
//	int i, k = 0;
//
//	for (i = 0; i < len; i++)
//	{
//		if (a[i] != ' ') //a[i] 공백문자가 아니면 
//			str[k++] = a[i];
//	}
//	str[k] = '\0';
//	//strcpy(a, str);
//	strcpy_s(a, sizeof(a), str);
//
//	free(str);
//}
//
