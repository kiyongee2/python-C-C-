//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//
//    ofstream out("score.txt", ios::out | ios::binary); // 바이너리 모드로 열기
//
//    if (!out) {
//        cerr << "Error: 파일을 열 수 없습니다.\n";
//        return 1;
//    }
//
//    string name;
//    int eng, math;
//
//    cout << "이름 입력: ";
//    cin >> name;
//    cout << "영어점수 입력: ";
//    cin >> eng;
//    cout << "수학점수 입력: ";
//    cin >> math;
//
//    // 파일에 쓰기 (ANSI로 저장)
//    out << name << " " << eng << " " << math << endl;
//
//    out.close();
//    cout << "데이터가 성공적으로 저장되었습니다!" << endl;
//    return 0;
//}