//#include <stdio.h>
//
//int main() {
//
//	/*// ���ڿ� �迭 ����
//	char str1[6] = { 'c', 'l', 'o', 'u', 'd', '\0' };
//	char str2[] = "cloud";
//	int i;
//
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//
//	// ���ڿ� ������ �迭 ����
//	char* p[3] = { "apple", "banana", "orange" };
//
//	//printf("%s\n", p[0]);
//
//	for(i = 0; i < 3; i++)
//		printf("%s\n", p[i]);*/
//
//		// �迭�� �����ͷ� �����ϱ�
//	int a[10];
//	int* b;
//	int i;
//
//	for (i = 0; i < 10; i++) {
//		a[i] = i + 1;
//		printf("%-2d", a[i]);
//	}
//	printf("\n");
//
//	b = a;   // b=&a[0]
//	/*for (i = 0; i < 10; i++) {
//		printf("%d ", b[i]);
//	}
//	printf("\n");*/
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(b + i));
//	}
//	printf("\n");
//
//	// �迭�� �� ��ҿ� 2 ���ϱ�
//	for (i = 0; i < 10; i++) {
//		*b += 2;
//		b++;
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//	return 0;
//}