//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
///*
//  - �� ���� ���ڿ��� �����Ͽ� �ϳ��� ���ڿ��� �����
//    a �迭�� ����� Ŀ�� �մϴ�. 
//	"books"(5��) + "marks"(5��) + '\0' = �� 11����Ʈ�� �ʿ�
//*/
//int main()
//{
//	int i = 0, j = 0;
//	char a[12] = "books";
//	char b[] = "marks";
//
//	printf("%s+%s=", a, b);
//	while (a[i] != '\0')
//		i++;
//	//printf("\ni=%d\n", i); //5
//
//	while (b[j] != '\0') {
//		a[i] = b[j];
//		i++;
//		j++;
//	}
//	a[i] = '\0';
//	printf("%s\n", a);
//
//	/*
//	   i=5, a[5]=b[0], booksm
//	   i=6, a[6]=b[1], booksma
//	   i=7, a[7]=b[2], booksmar
//	   i=8, a[8]=b[3], booksmark
//	   i=9, a[9]=b[4], booksmarks
//	   i=10, a[10] = '\0'
//	*/
//
//	//strcat() ���
//	char str1[20] = "books";
//	char str2[] = "marks";
//
//	strcat(str1, str2);
//	printf("%s\n", str1);
//
//	return 0;
//}