//#include <iostream>
//
//using namespace std;
//
//class Stack {
//private:
//	int* arr;      //���� �޸� �ּ� ����
//	int capacity;  //�迭�� �ִ� ũ��
//	int top;
//public:
//	Stack(int size) {
//		arr = new int[size];
//		capacity = size;
//		top = -1;
//	}
//
//	~Stack() {
//		delete[] arr;
//	}
//
//	void push(int element);  //��� ����
//	int pop();               //��� ����
//};
//
//void Stack::push(int element) {
//	if (top == capacity - 1) {
//		cout << "stack overflow\n";
//		return;
//	}
//	arr[++top] = element;
//}
//
//int Stack::pop() {
//	if (top == -1) {
//		cout << "stack underflow";
//		return -1;
//	}
//	return arr[top--]; 
//} 
//
//int main() {
//
//	Stack stack(3);  // ��ü ����
//
//	cout << "*** ���ÿ� �ڷ� ���� ***\n";
//	stack.push(10);
//	stack.push(20);
//	stack.push(30);
//	stack.push(40);
//
//	cout << "*** ���ÿ��� �ڷ� ���� ***\n";
//	cout << stack.pop() << endl;
//	cout << stack.pop() << endl;
//	cout << stack.pop() << endl;
//	cout << stack.pop() << endl;
//
//	return 0;
//}