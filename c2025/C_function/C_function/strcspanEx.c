//#include <stdio.h>
//
//int main()
//{
//	char str[] = "Hello\nWorld";
//	int pos = strcspn(str, "\n");
//
//	printf("%d\n", pos); //5
//
//	char msg[100];
//	fgets(msg, sizeof(msg), stdin);  //����� �Է�(���๮�� ���Ե�)
//	str[strcspn(msg, "\n")] = '\0';  // ���� ����
//
//	/*
//	   # strcspn()�� '\n'�� ��ġ�� ã�Ƽ� '\0'���� ����
//	     str[5] = '\0'
//	   # fgets()�� ����� ���� ���ڿ�
//	     "Good Luck!\n\0"
//	   # strcspn() ó����
//	     "Good Luck!\0"
//	*/
//	printf("%s", msg);
//
//	return 0;
//}
