//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	//������ ������ ������ ���� ����
//	vector<int> vec; 
//
//	//��� ����
//	vec.push_back(80);
//	vec.push_back(75);
//	vec.push_back(90);
//
//	//�ε���
//	cout << vec[1] << endl;  //75
//
//	//��ü ��ȸ
//	for (int i = 0; i < vec.size(); i++) {
//		cout << vec[0] << endl;
//	}
//	cout << "----------------------\n";
//
//	//�ݺ��� ����
//	vector<int>::iterator it = vec.begin();
//
//	//�ε���
//	cout << *it << endl;  //80, ������ ���
//	cout << *(it + 1) << endl;  //75
//	cout << *(it + 2) << endl;  //90
//	cout << "----------------------\n";
//
//	//�ݺ��ڷ� ��ü ��ȸ
//	cout << *vec.begin() << endl;  //ù��° ���
//	cout << *(vec.begin() + 1) << endl;  //�ι�° ���
//	cout << *(vec.end() -1) << endl;  //������ ���
//	cout << "----------------------\n";
//
//	for (it = vec.begin(); it != vec.end(); it++) {
//		cout << *it << endl;
//	}
//	cout << "----------------------\n";
//
//	//��� ����
//	for (it = vec.begin(); it != vec.end(); it++) {
//		if (*it == 90) {
//			vec.erase(it);
//			break;
//		}
//	}
//
//	//���� ��� for
//	for (auto v : vec) {
//		cout << v << endl;
//	}
//
//	return 0;
//}