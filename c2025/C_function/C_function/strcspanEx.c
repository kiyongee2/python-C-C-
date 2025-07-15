#include <stdio.h>

int main()
{
	char str[] = "Hello\nWorld";
	int pos = strcspn(str, "\n");

	printf("���๮�� ��ġ: %d\n", pos); //5

	str[strcspn(str, "\n")] = '\0';
	/*  strcspn()�� '\n'�� ��ġ�� ã�Ƽ� '\0'���� ����
		str[5] = '\0' */
	printf("-------------------------\n");

	char msg[100];

	printf("�޽��� �Է�: ");
	//fgets()�� Enter�� ������ ���� ����('\n')�� �Բ� ����˴ϴ�.
	fgets(msg, sizeof(msg), stdin); 
	msg[strcspn(msg, "\n")] = '\0';  //���๮�� ����
	printf("%s", msg);
	/*
	   # fgets()�� ����� ���� ���ڿ�
	     "Good Luck!\n\0"
	   # strcspn() ó����
	     "Good Luck!\0"
	*/
	return 0;
}
