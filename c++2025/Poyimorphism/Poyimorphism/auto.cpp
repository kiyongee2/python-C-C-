#include <iostream>
#include <vector>
using namespace std;

/*int square(int x) {
	return x * x;
}*/
//inline �Լ� - �Լ� ȣ���� �Ͼ�� ����
//���α׷��� ���� �ӵ� ���ϸ� ���� ���� ���
int square(int x) { return x * x; }

int main()
{
	auto ch = 'K'; //������
	auto num = 12; //������
	auto unit = 2.54; //�Ǽ���
	auto* ip = &num;  //������ ������

	cout << ch << ", " << num << ", " << unit << endl;
	cout << *ip << endl;

	//�Լ��� ���� Ÿ��
	auto value = square(9);
	cout << value << endl;

	//���� �ڷᱸ��
	vector<int> vec = { 1, 2, 3, 4 };

	/*for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}*/

	//���� ��� for - int�� ��� auto ���
	//������ ��ȸ�Ϸ��� auto&�� �����
	for (auto& v : vec) {
		cout << v << " ";
	}

	return 0;
}
