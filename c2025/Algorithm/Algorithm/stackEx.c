//#include <stdio.h>
///*
//   스택(stack)
//   - LIFO(Last In First Out) : 후입선출
//*/
//
//#define MAX_LEN 10
//int top = -1;
//int stack[MAX_LEN];  //stack 배열 생성
//
//void push(int x) { //요소 삽입(저장)
//	top++;
//	stack[top] = x;
//	printf("%d %d\n", top, stack[top]);
//}
//
//int pop() { //요소 삭제(빼기)
//	if (top < 0) {
//		printf("스택이 비었습니다!!\n");
//		return 0;
//	}
//	return stack[top--];
//}
//
//int main()
//{
//	printf("스택에 자료 저장(넣기)\n");
//	push(10);
//	push(20);
//	push(30);
//
//	printf("스택에서 자료 삭제(빼기)\n");
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//
//	return 0;
//}
