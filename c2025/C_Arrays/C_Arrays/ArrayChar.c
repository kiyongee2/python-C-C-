#include <stdio.h>
#define MAX_LEN 4

int main()
{
	/*char name[20];
	printf("�̸� �Է�: ");
	scanf_s("%s", name, sizeof(name));

	printf("�̸�: %s\n", name);*/

	char fr1[] = "apple";
	char fr2[] = {'a', 'p', 'p', 'l', 'e', '\0'};
	char fr3[] = "���";

	printf("%s\n", fr1);
	printf("%s\n", fr2);

	return 0;
}