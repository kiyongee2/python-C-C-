#include <iostream>
#include <string>
using namespace std;

int main()
{
    string birthYear;

    cout << "��� �⵵ �Է�: ";
    cin >> birthYear;

    if (birthYear.length() != 4) {
        cout << "�Է� ����: ����⵵�� 4�ڸ����� �մϴ�.\n";
        return 1;
    }

    char lastDigit = birthYear[3];

    if (lastDigit == '1' || lastDigit == '6') {
        cout << "��û���� �������Դϴ�.\n";
    }
    else if (lastDigit == '2' || lastDigit == '7') {
        cout << "��û���� ȭ�����Դϴ�.\n";
    }
    else if (lastDigit == '3' || lastDigit == '8') {
        cout << "��û���� �������Դϴ�.\n";
    }
    else if (lastDigit == '4' || lastDigit == '9') {
        cout << "��û���� ������Դϴ�.\n";
    }
    else if (lastDigit == '5' || lastDigit == '0') {
        cout << "��û���� �ݿ����Դϴ�.\n";
    }
    else {
        cout << "��ȿ���� ���� �Է��Դϴ�.\n";
    }

    return 0;
}

