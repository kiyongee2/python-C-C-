//#include <iostream>
//
//using namespace std;
//
//class Stack {
//private:
//	//int arr[5];
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
//	void push(int element) {
//		if (top == capacity - 1) {
//			cout << "stack overflow\n";
//			return;
//		}
//		arr[++top] = element;
//	}
//
//	int pop() {
//		if (top == -1) {
//			cout << "stack underflow";
//			return -1;
//		}
//		//논리적인 삭제
//		return arr[top--];
//	}
//
//	void print() {
//		cout << "\nStack display(LiFO) : ";
//		for (int i = top; i >= 0; i--) {
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//
//	void clear() {
//		top = -1;
//	}
//};
//
//int main() {
//
//	Stack stack(5);  // 객체 생성
//
//	while (1) {
//		system("cls");  //화면 지우기
//		cout << "\n\n\t *** Stack with Array *** \n\n";
//		cout << "\n1. push	2. pop	3. print  4.clear 0. terminate\n";
//		cout << "-------------------------------------------------\n";
//		cout << "Choice : [ ]\b\b";
//		int choice;
//		cin >> choice;
//
//		int value;  //입력할 값
//
//		switch (choice) {
//		case 1:
//			cout << "\n\n삽입 할 정수 입력 : ";
//			cin >> value;
//			stack.push(value);
//			break;
//		case 2:
//			value = stack.pop();
//			if (value == -1)
//				cout << "stack underflow!!";
//			else
//				cout << value << "pop!!";
//			break;
//		case 3:
//			stack.print();
//			break;
//		case 4:
//			stack.clear();
//			break;
//		case 0:
//			cout << "\n\n\t\t프로그램을 종료합니다\n";
//			return 0;
//		}
//		cout << "\n\n\t\t";
//		system("pause");
//	}
//
//	return 0;
//}