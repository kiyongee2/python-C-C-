//#include <stdio.h>
//
//#define MAX_LEN 3
//int top = -1;
//int stack[MAX_LEN];  //stack �迭 ����
//
//void push(char c) { //��� ����(����)
//	if (top >= MAX_LEN - 1) {
//		printf("������ ���� á���ϴ�.\n");
//		return;  //return '\0' (�ι���, �������)
//	}
//	stack[++top] = c;
//	printf("%d %c\n", top, stack[top]);
//}
//
//int pop() { //��� ����(����)
//	if (top < 0) {
//		printf("������ ������ϴ�!!\n");
//		return; 
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
