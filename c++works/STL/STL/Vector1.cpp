//#include <iostream>
//#include <vector>  //vector �����̳� ���
//#include <string>
//using namespace std;
//
//int main()
//{
//	//���� ���� ������ ������ ���� ����
//	vector<int> vec;
//
//	//���� �߰�
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//
//	//����Ʈ�� ũ��
//	cout << vec.size() << endl;
//
//	//��� �˻�
//	cout << vec[0] << endl;
//
//	//2�� �ε��� �� ����
//	//vec[2] = 10;
//	vec.at(2) = 10;
//
//	//��ü ��ȸ
//	for (int i = 0; i < vec.size(); i++)
//	{
//		cout << vec[i] << " ";
//	}
//	cout << "\n=========================\n";
//
//	//���� ���� ���ڿ��� ������ ���� ����
//	vector<string> list;
//	string name;
//
//	//����
//	list.push_back("jerry");
//	list.push_back("luna");
//	list.push_back("hangang");
//	list.push_back("elsa");
//
//	//����Ʈ�� ũ��
//	cout << list.size() << endl;
//
//	for (int i = 0; i < list.size(); i++)
//	{
//		cout << list[i] << " ";
//	}
//	cout << "\n=========================\n";
//
//	//�ִ밪 ���
//	name = list.at(0);  //�ִ밪���� ����
//	for (int i = 0; i < list.size(); i++)
//	{
//		if (list[i] > name)
//			name = list[i];
//	}
//	cout << "�������� ���� �ڿ� ������ �̸��� " << name << endl;
//
//	return 0;
//}