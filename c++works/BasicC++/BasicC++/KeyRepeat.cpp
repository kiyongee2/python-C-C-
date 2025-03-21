//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	/*
//		키보드 'y' or 'Y' 키를 누르면 - "계속 반복" 출력
//		키보드 'n' or 'N' 키를 누르면 - "반복 중단" 출력
//		그 이외의 키는 "잘못된 입력입니다. 다시 입력하세요!"
//	*/
//	string key;  //입력할 키 변수
//
//	while (1)
//	{
//		cout << "계속 반복할까요?(y/n 입력) ";
//		cin >> key;
//
//		//compare() - 문자 비교 일치하면 0, 일치하지 않으면 1
//		if (key.compare("y") == 0 || key.compare("Y") == 0)
//		{
//			cout << "계속 반복!\n";
//		}
//		else if (key.compare("n") == 0 || key.compare("N") == 0)
//		{
//			cout << "반복 중단!\n";
//			break;
//		}
//		else
//		{
//			cout << "잘못된 입력입니다! 다시 입력하세요!\n";
//		}
//	}
//
//	return 0;
//}
