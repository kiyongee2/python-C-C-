//#include <iostream>
//#include <vector>
//using namespace std;
//
//int square(int x) { return x * x; } //inline 함수
//int main()
//{
//	auto ch = 'K';
//	auto n = 2; //2가 정수이므로 n을 int로 선언
//	auto* p = &n;
//
//	cout << ch << endl;
//	cout << "n=" << n << ", p=" << p << endl;
//
//	//함수의 리턴 타입으로 추론
//	auto value = square(8);
//	cout << value << endl;
//
//	//vector에 사용
//	vector<int> v = { 1, 2, 3, 4 };
//
//	/*vector<int>::iterator it;
//	for (it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}*/
//
//	for (auto it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//
//	return 0;
//}
