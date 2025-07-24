#include <iostream>
#include <string>
using namespace std;

int main()
{
    string birthYear;

    cout << "출생 년도 입력: ";
    cin >> birthYear;

    if (birthYear.length() != 4) {
        cout << "입력 오류: 출생년도는 4자리여야 합니다.\n";
        return 1;
    }

    char lastDigit = birthYear[3];

    if (lastDigit == '1' || lastDigit == '6') {
        cout << "신청일은 월요일입니다.\n";
    }
    else if (lastDigit == '2' || lastDigit == '7') {
        cout << "신청일은 화요일입니다.\n";
    }
    else if (lastDigit == '3' || lastDigit == '8') {
        cout << "신청일은 수요일입니다.\n";
    }
    else if (lastDigit == '4' || lastDigit == '9') {
        cout << "신청일은 목요일입니다.\n";
    }
    else if (lastDigit == '5' || lastDigit == '0') {
        cout << "신청일은 금요일입니다.\n";
    }
    else {
        cout << "유효하지 않은 입력입니다.\n";
    }

    return 0;
}

