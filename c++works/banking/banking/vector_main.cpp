//#include <iostream>
//#include <vector>
//
//using namespace std;
//
////�Լ� ���ø�
//template <typename T>
//void display(const vector<T>& v) {
//	for (const auto& n : v)  //v �޸� ����(���۷���-&)
//		cout << n << " ";
//	cout << endl;
//}
//
////void display(const vector<int>& v) {
////	for (const auto& n : v)  //v �޸� ����(���۷���-&)
////		cout << n << " ";
////	cout << endl;
////}
//
//int main() {
//
//	vector<int> v1{ 1, 2, 3, 4 };
//	vector<int> v2(3);
//	vector<int> v3{ 3 };
//	vector<int> v4(4, 2);
//
//	cout << "v1 = ";
//	display(v1);
//	cout << "v1 size = " << v1.size() << ", v1 capacity = " << v1.capacity() << endl;
//	v1.reserve(10);  //�뷮 ����
//	cout << "v1 size = " << v1.size() << ", v1 capacity = " << v1.capacity() << endl;
//
//	cout << "v2 = ";
//	display(v2);
//
//	cout << "v3 = ";
//	display(v3);
//
//	cout << "v4 = ";
//	display(v4);
//
//	vector<string> fruit{ "apple", "orange", "grape" };
//	cout << "fruit = ";
//	display(fruit);
//	
//	return 0;
//} 