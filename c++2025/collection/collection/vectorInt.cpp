//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> vec; //������ ���� ����
//
//	//��� ����
//	/*vec.push_back(80);
//	vec.push_back(75);
//	vec.push_back(90);*/
//
//	vec = { 80, 75, 90 };
//
//	//Ư�� ��� �˻�
//	cout << "ù ��°: " << vec.front() << endl;
//	cout << "������: " << vec.back() << endl;
//	cout << vec[0] << endl;  //80
//	cout << vec.at(1) << endl; //75
//
//	cout << "ũ��: " << vec.size() << endl;
//
//	//��ü ��ȸ
//	for (int i = 0; i < vec.size(); i++) {
//		cout << vec[i] << endl;
//	}
//	cout << "----------------------\n";
//
//	//�ݺ��� ����
//	vector<int>::iterator it = vec.begin();
//
//	//�ε���
//	cout << *it << endl;  //80
//	cout << *(it + 1) << endl;  //75
//	cout << *(it + 2) << endl;  //90
//	cout << "----------------------\n";
//
//	//�ݺ��ڷ� ��ü ��ȸ
//	cout << *vec.begin() << endl;  //ù��° ���
//	cout << *(vec.begin() + 1) << endl;  //�ι�° ���
//	cout << *(vec.end() - 1) << endl;  //������ ���
//	cout << "----------------------\n";
//
//	for (it = vec.begin(); it != vec.end(); it++) {
//		cout << *it << endl;
//	}
//	cout << "----------------------\n";
//
//	//��� ����
//	//vec[1] = 100;
//	vec.at(1) = 100;
//
//	//������ ��� ����
//	vec.pop_back();
//
//	//Ư�� ��� ����
//	/*for (it = vec.begin(); it != vec.end(); it++) {
//		if (*it == 90) {
//			vec.erase(it);
//			break;
//		}
//	}*/
//
//	//���� ��� for
//	for (auto v : vec) {
//		cout << v << endl;
//	}
//
//	return 0;
//}