//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> vec;  //������ ���� ����
//
//	//��� ����
//	vec.push_back(0);
//	vec.push_back(1);
//	vec.push_back(2);
//
//	cout << "***** iterator(�ݺ���) ��� *****\n";
//	vector<int>::iterator it = vec.begin();
//
//	/*cout << *it << endl;  //vec�� ����� ���� ���
//	cout << *(it + 1) << endl;  
//	cout << *(it + 2) << endl;  */
//
//	for (it = vec.begin(); it != vec.end(); it++)
//	cout << *it << " ";
//	cout << endl;
//
//	//��� ����
//	vec.insert(vec.begin() + 2, 20); //vec[2] �տ� 20 �߰�
//
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//
//	//��� ����
//	vec.erase(vec.begin() + 1); //vec[1] ����
//
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//
//	return 0;
//}