//#include <iostream>
//
//using namespace std;
//
//// 추상 클래스
//class Calculator {
//public:
//	virtual int add(int a, int b) = 0;
//	virtual double average(int a[], int size) = 0;
//};
//
//class MyCalculator : public Calculator {
//public:
//	int add(int a, int b) {
//		return a + b;
//	}
//
//	double average(int a[], int size) {
//		double sum = 0;
//		for (int i = 0; i < size; i++) {
//			sum += a[i];
//		}
//		return sum / size;
//	}
//};
//
//int main() {
//
//	int a[] = { 1, 2, 3, 4 };
//	Calculator *cal = new MyCalculator();
//	cout << cal->add(2, 3) << endl;
//	cout << cal->average(a, 4) << endl;
//
//	return 0;
//}