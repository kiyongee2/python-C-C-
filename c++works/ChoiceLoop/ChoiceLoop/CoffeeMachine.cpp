#include <iostream>
using namespace std;

int main()
{
	int money;  
	int coffee = 5;
	while (1)
	{
		cout << "돈을 넣어주세요: ";
		cin >> money;
		if (money == 500)
		{
			cout << "커피가 나옵니다.\n";
			coffee -= 1;
		}
		else if (money > 500)
		{
			cout << "커피가 나오고, 거스름돈 " << (money - 500) << "원을 돌려줍니다.\n";
			coffee -= 1;
		}
		else
		{
			cout << "돈을 돌려주고 커피는 나오지 않습니다\n";
		}

		if (coffee == 0)
		{
			cout << "커피가 모두 소진되어 판매를 중지합니다.\n";
			break;
		}
	}

	return 0;
}
