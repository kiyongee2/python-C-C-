#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> vec;  //정수값을 저장할 벡터 생성

	//요소 추가
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	//순회를 위한 반복자 설정
	vector<int>::iterator it = vec.begin();

	//vec에 저장된 원소 출력
	cout << *it << endl;  
	cout << *(it + 1) << endl;  
	cout << *(it + 2) << endl;  
	cout << *(it + 3) << endl;  

	//요소중 30을 삭제
	for (auto it = vec.begin(); it != vec.end(); it++) {
		if (*it == 30) {
			vec.erase(it);
			break;
		}
	}

	cout << "*** vec 출력 ***" << endl;
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