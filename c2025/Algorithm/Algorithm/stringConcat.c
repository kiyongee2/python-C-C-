//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
///*
//  - �� ���� ���ڿ��� �����Ͽ� �ϳ��� ���ڿ��� �����
//    a �迭�� ����� Ŀ�� �մϴ�. 
//	"smart"(5��) + "phone"(5��) + '\0' = �� 11����Ʈ�� �ʿ�
//*/
//int main()
//{
//	int i = 0, j = 0;
//	char a[12] = "smart";  //����� ũ�� Ȯ��
//	char b[] = "phone";
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
//	   i=5, a[5]=b[0], smartp
//	   i=6, a[6]=b[1], smartph
//	   i=7, a[7]=b[2], smartpho
//	   i=8, a[8]=b[3], smartphon
//	   i=9, a[9]=b[4], smartphone
//	   i=10, a[10] = '\0'
//	*/
//
//	/*
//	  strcart() �Լ�
//	  ���ڿ� ��('\0')�� ã�� �ڵ����� �ڿ� �ٿ��ָ�, 
//	  ���� �� �������� '\0'�� �߰��մϴ�.
//	*/
//	char str1[20] = "smart";  //����� ũ�� Ȯ��
//	char str2[] = "phone";
//
//	strcat(str1, str2);
//	printf("%s\n", str1);
//
//	return 0;
//}