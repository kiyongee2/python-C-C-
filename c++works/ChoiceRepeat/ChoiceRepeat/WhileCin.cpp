//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int number;   //학번
//	string name;  //이름
//	int eng;      //영어 점수
//	int math;     //수학 점수
//	double avg;   //평균
//
//	while (1)
//	{
//		cout << "학번을 입력하세요(0이하 종료): ";
//		cin >> number;
//		if (number <= 0) break;
//
//		cout << "이름을 입력하세요: ";
//		cin >> name;
//
//		cout << "영어점수를 입력하세요: ";
//		cin >> eng;
//
//		cout << "수학점수를 입력하세요: ";
//		cin >> math;
//
//		avg = (double)(math + eng) / 2;
//
//		cout << "\n=== 학생의 정보 출력 ===\n";
//		cout << "학번 이름 영어 수학 평균\n";
//		cout << number << " " << name << " " << eng <<"   " <<
//			math << "   " << avg << endl;
//	}
//
//	return 0;
//}