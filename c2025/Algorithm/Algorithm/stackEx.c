//#include <stdio.h>
///*
//   ����(stack)
//   - LIFO(Last In First Out) : ���Լ���
//*/
//
//#define MAX_LEN 10
//int top = -1;
//int stack[MAX_LEN];  //stack �迭 ����
//
//void push(int x) { //��� ����(����)
//	top++;
//	stack[top] = x;
//	printf("%d %d\n", top, stack[top]);
//}
//
//int pop() { //��� ����(����)
//	if (top < 0) {
//		printf("������ ������ϴ�!!\n");
//		return 0;
//	}
//	return stack[top--];
//}
//
//int main()
//{
//	printf("���ÿ� �ڷ� ����(�ֱ�)\n");
//	push(10);
//	push(20);
//	push(30);
//
//	printf("���ÿ��� �ڷ� ����(����)\n");
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//
//	return 0;
//}
