#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> vec;  //�������� ������ ���� ����

	//��� �߰�
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	//��ȸ�� ���� �ݺ��� ����
	vector<int>::iterator it = vec.begin();

	//vec�� ����� ���� ���
	cout << *it << endl;  
	cout << *(it + 1) << endl;  
	cout << *(it + 2) << endl;  
	cout << *(it + 3) << endl;  

	//����� 30�� ����
	for (auto it = vec.begin(); it != vec.end(); it++) {
		if (*it == 30) {
			vec.erase(it);
			break;
		}
	}

	cout << "*** vec ��� ***" << endl;
	/*for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		cout << *it << " ";
	cout << endl;*/

	for (auto it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}

	/*for (int i = 0; i < 5; i++)
		vec.push_back(i + 1);

	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		cout << *it << " ";
	cout << endl;

	for (auto it = vec.begin(); it != vec.end(); it++)
		cout << *it << " ";*/

	return 0;
}