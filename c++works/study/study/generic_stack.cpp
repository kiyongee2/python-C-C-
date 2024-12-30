//#include <iostream>
//
//using namespace std;
//
//// 제네릭 함수
//template <class T>
//class MyStack {
//	int top;
//	T data[10];
//public:
//	MyStack();
//	void push(T element);
//	T pop();
//};
//
//template <class T>
//MyStack<T>::MyStack() {
//	top = -1;  //스택 비어있음
//}
//
//template <class T>
//void MyStack<T>::push(T element) {
//	if (top == 9) {
//		cout << "stack full";
//		return;
//	}
//	top++;
//	data[top] == element;
//}
//
//template <class T>
//T MyStack<T>::pop() {
//	T retData;
//	if (top == -1) {
//		cout << "stack empty";
//		return 0;
//	}
//	retData = data[top--];
//	return retData;
//}
//
//int main() {
//	
//	/*MyStack<int> iStack;
//	iStack.push(3);
//	cout << iStack.pop() << endl;*/
//
//	MyStack<char>* p = new MyStack<char>();
//	p->push('a');
//	cout << p->pop() << endl;
//	delete p;
//
//	return 0;
//}