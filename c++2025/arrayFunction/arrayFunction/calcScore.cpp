//#include <iostream>
//using namespace std;
//
//int main()
//{
//	bool run = true;  //상태 변수
//	int score[3] = {0};
//	
//	while (run) {
//		cout << "--------------------------------------------\n";
//		cout << "1.점수입력 | 2.점수리스트 | 3.분석 | 4.종료\n" ;
//		cout << "--------------------------------------------\n";
//		cout << "선택> ";
//		int choice;
//		int total = 0;
//		float average;
//		int max;
//
//		cin >> choice;  //메뉴 선택(입력)
//
//		switch (choice) {
//		case 1:
//			for (int i = 0; i < size(score); i++) {
//				cout << "score[" << i << "]=";
//				cin >> score[i];
//			}
//			break;
//		case 2:
//			for (int i = 0; i < size(score); i++) {
//				cout << "score[" << i << "]=" << score[i] << endl;
//			}
//			break;
//		case 3:
//			//평균점수, 최고점수
//			max = score[0];     //최대값 설정
//			for (int i = 0; i < size(score); i++) {
//				total += score[i];  //총점
//				
//				if (score[i] > max) //최고점수 
//					max = score[i];
//			}
//			average = (float)total / size(score);
//
//			cout << fixed;  //소수 자리수 설정
//			cout.precision(1); 
//			cout << "평균 점수: " << average << endl;
//			cout << "최고 점수: " << max << endl;
//			break;
//		case 4:
//			cout << "프로그램 종료!\n";
//			run = false;
//			break;
//		default:
//			cout << "잘못된 선택입니다. 다시 선택하세요\n";
//			break;
//		}
//	}//while() 닫음
//	
//	return 0;
//}