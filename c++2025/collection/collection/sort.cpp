#include <iostream>
#include <vector>
#include <algorithm>  //sort() 사용
using namespace std;

//벡터의 원소를 순서대로 출력
template<typename T>
void print_vector_all(vector<T>& vec) {
	for (typename vector<T>::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
}
int main()
{
	vector<int> vec = { 7, 6, 3, 5, 4, 1, 2, 0, 8 };
	sort(vec.begin(), vec.end());

	//반복자(iterator)
	vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//auto 자료형 사용
	for (auto it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}