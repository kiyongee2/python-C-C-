//#include <stdio.h>
//
//#define MAX_LEN 3
//char stack[MAX_LEN];
//int top = -1;
//  
//void push(char c) { //��� ����(����)
//	if (top >= MAX_LEN - 1) {
//		printf("������ ���� á���ϴ�.\n");
//		return;  //return '\0' (�ι���, �������)
//	}
//	stack[++top] = c;
//	printf("%c\n", stack[top]);
//}
//
//int pop() { //��� ����(����)
//	if (top < 0) {
//		printf("������ ������ϴ�!!\n");
//		return -1; 
//	}
//	return stack[top--];
//}
//
//int main()
//{
//	//a - b - c
//	printf("���ÿ��� �ڷ� ����\n"); 
//	push('a');
//	push('b');
//	push('c');
//	push("d"); //�ʰ����� �� ó�� Ȯ��
//
//	//c - b - a
//	printf("���ÿ��� �ڷ� ����\n");
//	printf("%c\n", pop());
//	printf("%c\n", pop());
//	printf("%c\n", pop());
//	printf("%c\n", pop()); //����� �� ó�� Ȯ��
//
//	return 0;
//}
//
