#include <iostream>
#include <vector>
#include <algorithm>  //sort() ���
using namespace std;

int main()
{
	vector<int> vec = { 3, 2, 5, 4, 1 };
	sort(vec.begin(), vec.end()); //�������� ����

	//�ݺ���(iterator)
	/*vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}*/

	for (auto v : vec)
		cout << v << " ";
	cout << endl;

	//�������� ����
	sort(vec.begin(), vec.end(), greater<int>()); 

	for (auto it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}