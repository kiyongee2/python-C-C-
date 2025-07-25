//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num;     //배열의 개수
//	int sum = 0; //총점
//	float avg;   //평규
//	int* score;  //점수를 저장할 포인터
//
//	cout << "*** 점수의 평균 계산 프로그램 ***\n";
//	cout << "입력할 정수의 개수: ";
//	cin >> num;
//	
//	score = new int[num]; //배열의 동적 할당
//	if (score == nullptr) {
//		cout << "메모리를 할당할 수 없습니다.\n";
//		return -1;
//	}
//
//	//점수 입력 및 총점 계산
//	for (int i = 0; i < num; i++) {
//		cout << i + 1 << "번째 점수: ";
//		cin >> score[i];
//
//		sum += score[i];
//	}
//
//	//평균
//	avg = (float)sum / num;
//
//	cout << fixed;
//	cout.precision(1);
//	cout << "평균: " << avg << endl;
//
//	delete[] score;  //메모리 해제
//
//	return 0;
//}