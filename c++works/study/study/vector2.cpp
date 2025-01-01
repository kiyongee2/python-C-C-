//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int square(int x) { return x * x; }
//
//int main() {
//
//	vector<int> v;  //정수 벡터 생성
//	v = { 5, 2, 4, 1, 3 };
//
//	/*cout << "5개의 정수 입력> ";
//	for (int i = 0; i < 5; i++) {
//		int n;
//		cin >> n;
//		v.push_back(n);
//	}*/
//
//	sort(v.begin(), v.end());  // algorithm 필요
//
//	/*for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << " ";
//	}
//	cout << endl;*/
//
//	/*// iterator 사용
//	vector<int>::iterator i;
//
//	for (i = v.begin(); i != v.end(); i++) {
//		cout << *i << ' ';
//	}*/
//
//	// auto 사용
//	for (auto i = v.begin(); i != v.end(); i++) {
//		cout << *i << " ";
//	}
//	cout << endl;
//
//	// auto 선언
//	auto c = 'a';
//	auto ten = 10;
//	auto* p = &ten;
//	cout << c << " " << *p << endl;
//
//	auto result = square(3);
//	cout << *p << " " << result << endl;
//
//	return 0;
//}