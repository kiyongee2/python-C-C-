#include <iostream>
using namespace std;

//열거형 상수 정의
enum MEDAL {
	GOLD = 1,
	SILVER,
	BRONZE
};

int main()
{
	//enum MEDAL medal; //선언
	//medal = SILVER;   //사용
	//int medal = SILVER; //사용 가능

	int medal;
	cout << "메달 선택(1 ~ 3 입력): ";
	cin >> medal;

	switch (medal)
	{
	case GOLD:
		cout << "금메달" << endl;
		break;
	case SILVER:
		cout << "은메달" << endl;
		break;
	case BRONZE:
		cout << "동메달" << endl;
		break;
	default:
		cout << "메달이 없습니다. 다시 입력하세요" << endl;
		break;
	}

	return 0;
}
