#include <iostream>
#include <string>
using namespace std;

//Pont ����ü ���� - ��ü ����
class Person {
public:
	int money;  //���� ��
	static int sharedMoney; //ȸ��

	void addMoney(int money) {
		this->money = money;
	}

	static void addSharedMoney(int money) {
		sharedMoney += money;
	}
};

int Person::sharedMoney = 0; //0���� �ʱ�ȭ

int main()
{
	Person kim;
	kim.money = 20000;
	kim.sharedMoney = 10000;

	Person lee;
	lee.money = 30000;
	lee.sharedMoney = 10000;

	//���� �� ���
	cout << kim.money << ' ' <<
		lee.money << endl;

	//ȸ�� ���
	cout << kim.sharedMoney << ' ' <<
		lee.sharedMoney << endl;

	return 0;
}