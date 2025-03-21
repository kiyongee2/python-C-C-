//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	/*
//	  점수에 따른 학점 산출하기
//	  점수: 90 ~ 100 -> 'A'
//	  점수: 80 ~ 90 -> 'B'
//	  점수: 70 ~ 80 -> 'C'
//	  점수: 70 미만 -> 'F'
//	*/
//
//	int score;
//	char grade = 'A';
//
//	cout << "점수를 입력하세요: ";
//	cin >> score;
//
//	if (score >= 90 && score <= 100)
//	{
//		grade = 'A';
//	}
//	else if (score >= 80)
//	{
//		grade = 'B';
//	}
//	else if (score >= 70)
//	{
//		grade = 'C';
//	}
//	else
//	{
//		grade = 'F';
//	}
//
//	cout << "학점은 " << grade << "입니다." << endl;
//
//	return 0;
//}