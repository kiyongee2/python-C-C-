//#include <iostream>
//using namespace std;
//
////전역 변수 선언
//bool run = true;  //상태 변수
//int studentNum;   //학생 수
//int* score;  //점수(동적 배열)
//
//void getStudentNum() { //학생수
//	if (score != nullptr) {
//		delete[] score;  //메모리 제거
//		score = nullptr;
//	}
//
//	cout << "학생수 입력: ";
//	cin >> studentNum;
//	score = new int[studentNum];
//	if (score == nullptr) {
//		cout << "메모리를 할당할 수 없습니다.\n";
//		return;
//	}
//}
//
//void scoreNullptr() { //2, 3, 4 메뉴를 먼저 선택한 경우
//	if (score == nullptr) {
//		puts("먼저 학생수를 입력하세요.");
//		return;
//	}
//}
//
//void inputScore() { //점수 입력
//	scoreNullptr();
//
//	for (int i = 0; i < studentNum; i++) {
//		cout << "score[" << i << "]=";
//		cin >> score[i];
//	}
//}
//
//void getScoreList() { //점수 리스트
//	scoreNullptr();
//
//	for (int i = 0; i < studentNum; i++) {
//		cout << "score[" << i << "]=" << score[i] << endl;
//	}
//}
//
//void calculate() { //분석 통계
//	scoreNullptr();
//
//	int total = 0; //총점
//	int max = score[0]; //최대값 설정
//	float average; //평균
//
//	for (int i = 0; i < studentNum; i++) {
//		total += score[i];  //총점
//
//		if (score[i] > max) //최고점수 비교
//			max = score[i];
//	}
//	average = (float)total / studentNum;
//
//	cout << fixed;  //소수 자리수 설정
//	cout.precision(1);
//	cout << "평균 점수: " << average << endl;
//	cout << "최고 점수: " << max << endl;
//}
//
//int main()
//{
//	while (run) {
//		cout << "------------------------------------------------------\n";
//		cout << "1.학생수 | 2.점수입력 | 3.점수리스트 | 4.분석 | 5.종료\n";
//		cout << "------------------------------------------------------\n";
//		cout << "선택> ";
//
//		int choice;       //메뉴 선택
//		cin >> choice;  //메뉴 선택
//
//		switch (choice) {
//		case 1:
//			getStudentNum();
//			break;
//		case 2:
//			inputScore();
//			break;
//		case 3:
//			getScoreList();
//			break;
//		case 4:
//			calculate();
//			break;
//		case 5:
//			cout << "프로그램 종료!\n";
//			run = false;
//			break;
//		default:
//			cout << "잘못된 선택입니다. 다시 선택하세요\n";
//			break;
//		}
//	}
//
//	return 0;
//}
//
