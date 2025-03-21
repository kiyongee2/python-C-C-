//#include <iostream>
//using namespace std;
//
//int getExp(int base, int exp) {
//	if (base <= 0 || exp < 0) {
//		throw "음수 사용 불가"; //catch()로 던짐
//	}
//	int value = 1;
//	for (int n = 0; n < exp; n++)
//		value = value * base;
//	return value;
//	/*
//	  base=2, exp=3
//	  n=0, 2 = 1 * 2
//	  n=1, 4 = 2 * 2 
//	  n=2, 8 = 4 * 2
//	 */
//}
//
//int main()
//{
//	int val = 0;
//	try {
//		val = getExp(2, 0); //음수를 입력하면 예외 발생
//		cout << "2의 0승은 " << val << "입니다." << endl;
//	}
//	catch(const char *s){
//		cout << "예외 발생!! " << s << endl;
//	}
//
//	return 0;
//}