//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//	개인 돈과 회비 관리하기
//*/
//class Person {
//public:
//	int money;  //개인 돈
//	static int sharedMoney; //공금
//
//	void addMoney(int money) {
//		this->money += money;
//	}
//
//	static void addSharedMoney(int smoney) {
//		sharedMoney += smoney;
//	}
//};
//
//int Person::sharedMoney = 0; //전역 변수 0으로 초기화
//
//int main()
//{
//	Person kim;
//	kim.money = 20000;
//	kim.sharedMoney = 10000;
//	kim.addSharedMoney(5000);
//
//	Person lee;
//	lee.money = 30000;
//	lee.sharedMoney = 10000;
//	lee.addSharedMoney(20000);
//
//	//개인 돈 출력
//	cout << kim.money << ' ' << lee.money << endl;
//
//	//회비 출력
//	cout << kim.sharedMoney << ' ' << lee.sharedMoney << endl;
//
//	return 0;
//}