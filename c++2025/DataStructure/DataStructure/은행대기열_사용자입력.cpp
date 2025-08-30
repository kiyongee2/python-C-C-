#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> que;   // 고객 번호 대기열
    int ticket = 1;   // 번호표 시작 번호
    int choice;       // 사용자 선택 메뉴

    while (true) {
        cout << "\n===== 고객 대기열 시스템 =====" << endl;
        cout << "1. 고객 도착 (번호표 발급)" << endl;
        cout << "2. 다음 고객 처리" << endl;
        cout << "3. 대기 중인 고객 수 확인" << endl;
        cout << "4. 종료" << endl;
        cout << "메뉴 선택: ";
        cin >> choice;

        if (choice == 1) {
            cout << "고객 " << ticket << "번 도착" << endl;
            que.push(ticket);  // 고객 번호 대기열에 추가
            ticket++;
        }
        else if (choice == 2) {
            if (que.empty()) {
                cout << "대기 중인 고객이 없습니다." << endl;
            }
            else {
                cout << "고객 " << que.front() << "번님 업무 처리중..." << endl;
                que.pop();
            }
        }
        else if (choice == 3) {
            cout << "현재 대기 중인 고객 수: " << que.size() << "명" << endl;
        }
        else if (choice == 4) {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }
        else {
            cout << "잘못된 입력입니다. 다시 선택하세요." << endl;
        }
    }

    return 0;
}
