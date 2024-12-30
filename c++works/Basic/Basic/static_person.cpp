//#include <iostream>
//
//using namespace std;
//
//// static - 전역 공간
//class Person {
//public:
//	int money;  //개인 소유의 돈
//	void addMoney(int money) {
//		this->money += money;
//	}
//
//	static int sharedMoney;  //공금
//	static void addShared(int n) {
//		sharedMoney += n;
//	}
//};
//
//int Person::sharedMoney = 10;
//
//class Math {
//public:
//	static int abs(int a) { return a > 0 ? a : -a; }
//	static int max(int a, int b) { return a > b ? a : b; }
//	static int min(int a, int b) { return a > b ? b : a; }
//};
//
//int main()
//{
//	Person::addShared(50);
//	cout << Person::sharedMoney << endl;
//
//	Person han;
//	han.money = 100;
//	han.sharedMoney = 200;
//	Person::addShared(100);
//
//	cout << han.money << ' '
//		<< Person::sharedMoney << endl;
//
//	// Math 클래스
//	cout << Math::abs(-2) << endl;
//	cout << Math::max(4, 5) << endl;
//	cout << Math::min(4, 5) << endl;
//
//	return 0;
//}   