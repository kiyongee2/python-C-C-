//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//���� ���� ������ ������ ���� ����
//	vector<int> vi;
//
//	//���� �߰�
//	vi.push_back(1);
//	vi.push_back(2);
//	vi.push_back(3);
//
//	//����Ʈ�� ũ��
//	cout << vi.size() << endl;
//
//	//��� �˻�
//	cout << vi[0] << endl;
//
//	//2�� �ε��� �� ����
//	//vi[2] = 10;
//	vi.at(2) = 10;
//
//	//��ü ��ȸ
//	for (int i = 0; i < vi.size(); i++)
//	{
//		cout << vi[i] << " ";
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
//	list.push_back("han");
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