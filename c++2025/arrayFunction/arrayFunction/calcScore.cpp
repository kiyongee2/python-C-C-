//#include <iostream>
//using namespace std;
//
//int main()
//{
//	bool run = true;  //상태 변수
//	int* score = nullptr; //점수(동적 배열)
//	int studentNum;   //학생 수
//	
//	while (run) {
//		cout << "------------------------------------------------------\n";
//		cout << "1.학생수 | 2.점수입력 | 3.점수리스트 | 4.분석 | 5.종료\n" ;
//		cout << "------------------------------------------------------\n";
//		cout << "선택> ";
//
//		int choice;
//		int total = 0;
//		float average;
//		int max;
//
//		cin >> choice;  //메뉴 선택(입력)
//
//		switch (choice) {
//		case 1:
//			cout << "학생수: ";
//			cin >> studentNum;
//			score = new int[studentNum];
//			break;
//		case 2:
//			for (int i = 0; i < studentNum; i++) {
//				cout << "score[" << i << "]=";
//				cin >> score[i];
//			}
//			break;
//		case 3:
//			for (int i = 0; i < studentNum; i++) {
//				cout << "score[" << i << "]=" << score[i] << endl;
//			}
//			break;
//		case 4:
//			//평균점수, 최고점수
//			max = score[0];     //최대값 설정
//			for (int i = 0; i < studentNum; i++) {
//				total += score[i];  //총점
//				
//				if (score[i] > max) //최고점수 
//					max = score[i];
//			}
//			average = (float)total / studentNum;
//
//			cout << fixed;  //소수 자리수 설정
//			cout.precision(1); 
//			cout << "평균 점수: " << average << endl;
//			cout << "최고 점수: " << max << endl;
//			break;
//		case 5:
//			cout << "프로그램 종료!\n";
//			run = false;
//			break;
//		default:
//			cout << "잘못된 선택입니다. 다시 선택하세요\n";
//			break;
//		}
//	}//while() 닫음
//
//	delete[] score;
//	
//	return 0;
//}