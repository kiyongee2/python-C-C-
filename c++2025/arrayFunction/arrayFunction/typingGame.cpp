//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string words[] = { "ant", "bear", "chicken", "elephant", 
//		"eagle", "horse", "lion", "monkey", "penguin", "tiger" };
//	string question;  //문제
//	string answer;    //사용자 입력 답
//	int n = 1;        //문제 번호
//	clock_t start, end; //시작, 종료시간
//	double elapsedTime; //소요시간
//
//	srand(time(nullptr)); //시드 설정
//	cout << "[타자 게임], 준비되면 엔터> ";
//	cin.ignore();  //버퍼 정리
//
//	start = clock();  //시작
//	while (n <= 10) {
//		cout << "\n문제 " << n << endl;
//		int rndIdx = rand() % size(words);
//		question = words[rndIdx];
//		cout << question << endl;
//		getline(cin, answer);
//
//		if (answer.compare(question) == 0) {
//			cout << "통과\n";
//			n++;
//		}
//		else {
//			cout << "오타! 다시 도전!\n";
//		}
//	}
//	end = clock(); //종료
//	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//	cout << fixed;
//	cout.precision(2);
//	cout << "게임 소요 시간: " << elapsedTime << "초" << endl;
//	
//	return 0;
//}
