//#include <iostream>
//#include <ctime>
//#include <thread> //this_thread::sleep_for()
//using namespace std;
//
//int main()
//{
//	//NULL 대신 nullptr 사용
//	time_t now = time(nullptr); //현재 시간
//
//	//1970.1.1 자정 이후부터 현재시간까지 초로 측정
//	cout << now << "초\n";
//	cout << now / (24 * 60 * 60) << "일\n";
//	cout << now / (365 * 24 * 60 * 60) << "년\n";
//
//	//수행 시간 측정
//	/*time_t start, end;
//
//	//start = time(nullptr); 
//	time(&start); //시작 시간
//	
//	for (int i = 1; i <= 10; i++) {
//		cout << i << endl;
//		//0.5초 간격으로 대기
//		this_thread::sleep_for(chrono::milliseconds(500));
//	}
//
//	//end = time(nullptr);
//	time(&end);  //종료 시간
//	cout << "수행시간: " << (end - start) << "초\n";*/
//
//	//수행 시간 측정(실수)
//	time_t start, end;
//	int sum = 0;
//
//	start = clock();
//	for (int i = 1; i <= 1000000; i++) {
//		sum += i;
//	}
//	end = clock();
//
//	//CLOCKS_PER_SEC - 초 단위 변환 상수
//	double duration = (double)(end - start) / CLOCKS_PER_SEC;
//
//	cout << "sum = " << sum << endl;
//	cout << "수행시간: " << duration << "초\n";
//
//	return 0;
//}