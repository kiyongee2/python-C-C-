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
//	char* str;  //포인터(동적 할당)
//	int i, k = 0;
//
//	str = (char*)malloc(sizeof(char) * len);
//	if (str == NULL) {
//		printf("동적 메모리 할당에 실패함\n");
//		return 1;
//	}
//
//	//공백문자 제거후 저장
//	for (i = 0; i < len; i++)
//	{
//		if (a[i] != ' ') //a[i] 공백문자가 아니면 
//			str[k++] = a[i];
//	}
//	str[k] = '\0'; //문자열 맨뒤 널문자
//
//	//strcpy(a, str);  //str을 a에 복사
//	strcpy_s(a, sizeof(a), str);
//
//	free(str);
//}
