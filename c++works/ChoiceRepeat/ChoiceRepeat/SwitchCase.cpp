//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	/*
//	  엘리베이터 타기 : 1 ~ 3층까지 있는 건물
//	*/
//	int floor;
//
//	cout << "가고 싶은 층을 누르세요: ";
//	cin >> floor;
//
//	switch (floor)
//	{
//	case 1:
//		cout << "1층을 눌렀습니다.\n";
//		break;
//	case 2:
//		cout << "2층을 눌렀습니다.\n";
//		break;
//	case 3:
//		cout << "3층을 눌렀습니다.\n";
//		break;
//	default:
//		cout << "건물에 없는 층입니다.\n";
//		break;
//	}
//
//	/*
//		12달 중에 31일, 30일, 28인 달 선택
//	*/
//	int month = 10;
//	int day;
//
//	switch (month)
//	{
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		day = 31;
//		break;
//	case 2:
//		day = 28;
//		break;
//	case 4: case 6: case 9: case 11:
//		day = 30;
//		break;
//	default :
//		day = 0;
//		break;
//	}
//
//	cout << month << "월은 " << day << "일까지 있습니다.\n";
//
//	return 0;
//}