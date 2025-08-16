//#include <stdio.h>
//
//#define MAX_LEN 3
//char stack[MAX_LEN];
//int top = -1;
//  
//void push(char c) { //요소 삽입(저장)
//	if (top >= MAX_LEN - 1) {
//		printf("스택이 가득 찼습니다.\n");
//		return;  //return '\0' (널문자, 비어있음)
//	}
//	stack[++top] = c;
//	printf("%c\n", stack[top]);
//}
//
//int pop() { //요소 삭제(빼기)
//	if (top < 0) {
//		printf("스택이 비었습니다!!\n");
//		return -1; 
//	}
//	return stack[top--];
//}
//
//int main()
//{
//	//a - b - c
//	printf("스택에서 자료 저장\n"); 
//	push('a');
//	push('b');
//	push('c');
//	push("d"); //초과했을 때 처리 확인
//
//	//c - b - a
//	printf("스택에서 자료 삭제\n");
//	printf("%c\n", pop());
//	printf("%c\n", pop());
//	printf("%c\n", pop());
//	printf("%c\n", pop()); //비었을 때 처리 확인
//
//	return 0;
//}
//
