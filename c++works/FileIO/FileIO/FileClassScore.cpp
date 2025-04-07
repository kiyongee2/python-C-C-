#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int eng, math;
    double avg;
};

int main() {

    ofstream out("scorelist.txt"); // 바이너리 모드로 열기
    Student std[3];

    if (!out) {
        cerr << "Error: 파일을 열 수 없습니다.\n";
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "번째 학생의 이름: ";
        cin >> std[i].name;
        cout << "영어점수 입력: ";
        cin >> std[i].eng;
        cout << "수학점수 입력: ";
        cin >> std[i].math;
        std[i].avg = (std[i].eng + std[i].math) / 2.0;
    }

    // 파일에 쓰기 (ANSI로 저장)
    for (int i = 0; i < 3; i++) {
        out << std[i].name << " " << std[i].eng << " " << 
            std[i].math << " " << std[i].avg << endl;
    }
    
    out.close();

    cout << "데이터가 성공적으로 저장되었습니다!" << endl;

    return 0;
}