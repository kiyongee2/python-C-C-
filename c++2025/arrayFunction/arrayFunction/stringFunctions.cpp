#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "Hello World";

    //문자열의 길이
    cout << str.length() << endl;  // 11
    
    //문자열 인덱싱
    cout << str.at(0) << endl;     // H
    cout << str[6] << endl;        // W

    string jumin = "030815-4567890";
    char gender = jumin.at(7); //4

    switch (gender) {
    case '1': case '3':
        cout << "남자" << endl;
        break;
    case '2': case '4':
        cout << "여자" << endl;
        break;
    }
    
    // 문자열 자르기(추출)
    string sub1 = str.substr(0, 5);  
    string sub2 = str.substr(6);  
    cout << sub1 << endl; // "Hello"
    cout << sub2 << endl; // "World" - 6번부터 끝까지.

    // 대체 - replace(시작위치, 문자의개수, 변경할문자)
    str.replace(6, 5, "Korea");        
    cout << str << endl;         // "Hello Korea"

    // 찾기 - find() : 첫 문자의 인덱스를 반환
    string subject = "C++ 프로그래밍";
    int pos = subject.find("C++"); //0 - 첫 문자의 인덱스 반환
    //int pos = subject.find("Python"); //찾지 못하면 -1
    cout << pos << endl;  //0

    if (subject.find("프로그래밍") != -1) {
        cout << "C++과 관련된 과목이군요!" << endl;
    }
    else {
        cout << "C++과 관련이 없는 과목이군요!" << endl;
    }

    return 0;
}
