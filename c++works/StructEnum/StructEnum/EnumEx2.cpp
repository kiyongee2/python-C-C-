#include <iostream>
using namespace std;

//������ ��� ����
enum MEDAL {
	GOLD = 1,
	SILVER,
	BRONZE
};

int main()
{
	//enum MEDAL medal; //����
	//medal = SILVER;   //���
	//int medal = SILVER; //��� ����

	int medal;
	cout << "�޴� ����(1 ~ 3 �Է�): ";
	cin >> medal;

	switch (medal)
	{
	case GOLD:
		cout << "�ݸ޴�" << endl;
		break;
	case SILVER:
		cout << "���޴�" << endl;
		break;
	case BRONZE:
		cout << "���޴�" << endl;
		break;
	default:
		cout << "�޴��� �����ϴ�. �ٽ� �Է��ϼ���" << endl;
		break;
	}

	return 0;
}
