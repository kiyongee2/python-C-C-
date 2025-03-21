#include <iostream>
#include <string>
using namespace std;

//Pont 구조체 정의 - 객체 복사
class Person {
public:
	int money;  //개인 돈
	static int sharedMoney; //회비

	void addMoney(int money) {
		this->money = money;
	}

	static void addSharedMoney(int money) {
		sharedMoney += money;
	}
};

int Person::sharedMoney = 0; //0으로 초기화

int main()
{
	Person kim;
	kim.money = 20000;
	kim.sharedMoney = 10000;

	Person lee;
	lee.money = 30000;
	lee.sharedMoney = 10000;

	//개인 돈 출력
	cout << kim.money << ' ' <<
		lee.money << endl;

	//회비 출력
	cout << kim.sharedMoney << ' ' <<
		lee.sharedMoney << endl;

	return 0;
}