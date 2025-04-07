//#include <iostream>
//
//using namespace std;
//
//class Stack {
//private:
//	int* arr;      //동적 메모리 주소 저장
//	int capacity;  //배열의 최대 크기
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
//	void push(int element);  //요소 저장
//	int pop();               //요소 삭제
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
//	Stack stack(3);  // 객체 생성
//
//	cout << "*** 스택에 자료 삽입 ***\n";
//	stack.push(10);
//	stack.push(20);
//	stack.push(30);
//	stack.push(40);
//
//	cout << "*** 스택에서 자료 삭제 ***\n";
//	cout << stack.pop() << endl;
//	cout << stack.pop() << endl;
//	cout << stack.pop() << endl;
//	cout << stack.pop() << endl;
//
//	return 0;
//}