#include <stdio.h>

int main()
{
	char str[] = "Hello";
	int num[] = { 1, 2, 3, 4 };

	printf("���� �迭�� �Ҵ�� �޸��� ũ�� : %d����Ʈ\n", sizeof(str));
	printf("���� �迭�� �Ҵ�� �޸��� ũ�� : %d����Ʈ\n", sizeof(num));

	//'\0' NULL���ڴ� ���ڿ�(�迭)�� ���� �ǹ���(�ʼ�)
	//char msg1[9] = "Thank you"; 
	char msg2[9] = { 'T', 'h', 'a', 'n', 'k', ' ', 'y', 'o', 'u'};
	char msg3[] = { 'T', 'h', 'a', 'n', 'k', ' ', 'y', 'o', 'u' ,'\0'};

	//printf("%s\n", msg1);
	printf("%s\n", msg2);
	printf("%s\n", msg3);

	//���ڷ� ���
	for (int n = 0; msg3[n] != NULL; n++)
	{
		printf("%c", msg3[n]);
	}
	
	return 0;
}