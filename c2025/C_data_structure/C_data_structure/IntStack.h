#ifndef INT_STACK
#define INT_STACK

typedef struct {
	int max;   //���� �뷮
	int ptr;   //���� ������
	int* stk;  //������ ù ��ҿ� ���� ������
}IntStack;

//���� �ʱ�ȭ
int initalize(IntStack* s, int max);

//���ÿ� �����͸� ����
int push(IntStack* s, int x);

//���ÿ��� �����͸� ����
int pop(IntStack* s, int* x);

int peek(const IntStack* s, int *x);

//���� ����
void clear(IntStack* s);

//������ ������ �ִ� �뷮
int capacity(const IntStack* s);

//������ ������ ����
int size(const IntStack* s);

//������ ����ִ��� ����
int isEmpty(const IntStack* s);

//������ ���� ���ִ��� ����
int isFull(const IntStack* s);

//���ؿ��� �˻�
int search(const IntStack* s, int x);

//������ ���
void print(const IntStack* s);

//���� ����
void terminate(IntStack* s);

#endif 
