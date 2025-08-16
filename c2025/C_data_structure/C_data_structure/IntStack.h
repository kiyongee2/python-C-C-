#ifndef INT_STACK
#define INT_STACK

typedef struct {
	int max;   //스택 용량
	int ptr;   //스택 포인터
	int* stk;  //스택의 첫 요소에 대한 포인터
}IntStack;

//스택 초기화
int initalize(IntStack* s, int max);

//스택에 데이터를 저장
int push(IntStack* s, int x);

//스택에서 데이터를 삭제
int pop(IntStack* s, int* x);

int peek(const IntStack* s, int *x);

//스택 비우기
void clear(IntStack* s);

//스택의 데이터 최대 용량
int capacity(const IntStack* s);

//스택의 데이터 개수
int size(const IntStack* s);

//스택이 비어있는지 여부
int isEmpty(const IntStack* s);

//스택이 가득 차있는지 여부
int isFull(const IntStack* s);

//스텍에서 검색
int search(const IntStack* s, int x);

//데이터 출력
void print(const IntStack* s);

//스택 종료
void terminate(IntStack* s);

#endif 
