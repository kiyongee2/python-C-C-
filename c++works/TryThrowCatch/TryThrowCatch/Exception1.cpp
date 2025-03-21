//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int count, sum, average;
//
//	while (true)
//	{
//		cout << "합계 입력>> ";
//		cin >> sum;
//
//		cout << "개수 입력>> ";
//		cin >> count;
//
//		try {
//
//			if (count <= 0)
//				throw count;  //int x로 던짐(점프)
//			else
//				average = sum / count;
//		}
//		catch(int x){
//			cout << "예외 발생!! " << x << "으로 나눌 수 없음" << endl;
//			continue;
//		}
//		cout << "평균 = " << average << endl << endl;
//	}
//
//	return 0;
//}