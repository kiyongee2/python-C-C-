#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> que;   // �� ��ȣ ��⿭
    int ticket = 1;   // ��ȣǥ ���� ��ȣ
    int choice;       // ����� ���� �޴�

    while (true) {
        cout << "\n===== �� ��⿭ �ý��� =====" << endl;
        cout << "1. �� ���� (��ȣǥ �߱�)" << endl;
        cout << "2. ���� �� ó��" << endl;
        cout << "3. ��� ���� �� �� Ȯ��" << endl;
        cout << "4. ����" << endl;
        cout << "�޴� ����: ";
        cin >> choice;

        if (choice == 1) {
            cout << "�� " << ticket << "�� ����" << endl;
            que.push(ticket);  // �� ��ȣ ��⿭�� �߰�
            ticket++;
        }
        else if (choice == 2) {
            if (que.empty()) {
                cout << "��� ���� ���� �����ϴ�." << endl;
            }
            else {
                cout << "�� " << que.front() << "���� ���� ó����..." << endl;
                que.pop();
            }
        }
        else if (choice == 3) {
            cout << "���� ��� ���� �� ��: " << que.size() << "��" << endl;
        }
        else if (choice == 4) {
            cout << "���α׷��� �����մϴ�." << endl;
            break;
        }
        else {
            cout << "�߸��� �Է��Դϴ�. �ٽ� �����ϼ���." << endl;
        }
    }

    return 0;
}
