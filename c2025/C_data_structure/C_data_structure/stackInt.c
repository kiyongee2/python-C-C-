#include <stdio.h>
/*
   스택(stack)
   - LIFO(Last In First Out) : 후입선출
*/

#define MAX_LEN 3
int top = -1;  //전역 변수
int stack[MAX_LEN];  //stack 배열 생성

void push(int x) { //요소 삽입(저장)
	if (top >= MAX_LEN - 1) {
		printf("스택이 가득 찼습니다.\n");
		return;  //정상 종료
	}
	top++;
	stack[top] = x; //top -> 0, 1, 2
	printf("%d ", stack[top]); 
}

int pop() { //요소 삭제(빼기)
	if (top < 0) {
		printf("스택이 비었습니다!!\n");
		return 0;
	}
	return stack[top--];
}

int main()
{
	int value;

	printf("스택에 자료 저장(넣기)\n");
	push(10);
	push(20);
	push(30);
	push(40);  //초과했을때 처리 확인

	printf("스택에서 자료 삭제(빼기)\n");
	/*printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop()); */ //비었을때 처리 확인
	
	while (top >= 0) {
		printf("%d ", pop());
	}

	return 0;
}