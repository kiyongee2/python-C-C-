//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int square(int x) { return x * x; }
//
//int main() {
//
//	vector<int> v;  //���� ���� ����
//	v = { 5, 2, 4, 1, 3 };
//
//	/*cout << "5���� ���� �Է�> ";
//	for (int i = 0; i < 5; i++) {
//		int n;
//		cin >> n;
//		v.push_back(n);
//	}*/
//
//	sort(v.begin(), v.end());  // algorithm �ʿ�
//
//	/*for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << " ";
//	}
//	cout << endl;*/
//
//	/*// iterator ���
//	vector<int>::iterator i;
//
//	for (i = v.begin(); i != v.end(); i++) {
//		cout << *i << ' ';
//	}*/
//
//	// auto ���
//	for (auto i = v.begin(); i != v.end(); i++) {
//		cout << *i << " ";
//	}
//	cout << endl;
//
//	// auto ����
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