//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	queue<int> que;
//	int ticket = 1;
//
//	for (int i = 0; i < 4; i++) {
//		cout << "고객 " << ticket << "번 도착" << endl;
//		que.push(ticket);  // 대기열에 고객 번호 추가
//		ticket++;          // 다음 고객을 위해 번호 증가
//	}
//
//	cout << "\n--- 업무 시작 ---\n" << endl;
//
//	while (!que.empty()) {
//		cout << "고객 " << que.front() << "번님 업무 처리중...\n";
//		que.pop();
//	}
//
//	return 0;
//}