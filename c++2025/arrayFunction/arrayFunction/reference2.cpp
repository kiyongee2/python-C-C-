//#include <iostream>
//
//using namespace std;
//
//void swapRef2(int*, int*);
//void swapRef(int&, int&);
//void swapVal(int, int);
//int main()
//{
//	int x = 10, y = 20;
//
//	cout << "값에 의한 호출\n";
//	swapVal(x, y);
//	cout << "x = " << x << ", y = " << y << endl;
//
//	cout << "참조에 의한 호출\n";
//	swapRef(x, y);
//	cout << "x = " << x << ", y = " << y << endl;
//
//	/*cout << "주소(포인터)에 의한 호출\n";
//	swapRef2(&x, &y);
//	cout << "x = " << x << ", y = " << y << endl;*/
//	
//	return 0;
//}
//
//void swapVal(int a, int b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapRef(int& a, int& b) { //참조자 전달(복사)
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapRef2(int* a, int* b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}