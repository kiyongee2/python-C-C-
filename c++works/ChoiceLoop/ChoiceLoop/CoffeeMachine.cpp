#include <iostream>
using namespace std;

int main()
{
	int money;  
	int coffee = 5;
	while (1)
	{
		cout << "���� �־��ּ���: ";
		cin >> money;
		if (money == 500)
		{
			cout << "Ŀ�ǰ� ���ɴϴ�.\n";
			coffee -= 1;
		}
		else if (money > 500)
		{
			cout << "Ŀ�ǰ� ������, �Ž����� " << (money - 500) << "���� �����ݴϴ�.\n";
			coffee -= 1;
		}
		else
		{
			cout << "���� �����ְ� Ŀ�Ǵ� ������ �ʽ��ϴ�\n";
		}

		if (coffee == 0)
		{
			cout << "Ŀ�ǰ� ��� �����Ǿ� �ǸŸ� �����մϴ�.\n";
			break;
		}
	}

	return 0;
}
