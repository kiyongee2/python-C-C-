#include <stdio.h>
/*
   ����(stack)
   - LIFO(Last In First Out) : ���Լ���
*/

#define MAX_LEN 3
int top = -1;  //���� ����
int stack[MAX_LEN];  //stack �迭 ����

void push(int x) { //��� ����(����)
	if (top >= MAX_LEN - 1) {
		printf("������ ���� á���ϴ�.\n");
		return;  //���� ����
	}
	top++;
	stack[top] = x; //top -> 0, 1, 2
	printf("%d ", stack[top]); 
}

int pop() { //��� ����(����)
	if (top < 0) {
		printf("������ ������ϴ�!!\n");
		return 0;
	}
	return stack[top--];
}

int main()
{
	int value;

	printf("���ÿ� �ڷ� ����(�ֱ�)\n");
	push(10);
	push(20);
	push(30);
	push(40);  //�ʰ������� ó�� Ȯ��

	printf("���ÿ��� �ڷ� ����(����)\n");
	/*printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop()); */ //������� ó�� Ȯ��
	
	while (top >= 0) {
		printf("%d ", pop());
	}

	return 0;
}