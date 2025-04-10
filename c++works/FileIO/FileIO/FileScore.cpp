//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//
//    ofstream out("score.txt");  //파일 객체 생성
//    if (!out) {
//        cerr << "Error: 파일을 열 수 없습니다.\n";
//        return 1;
//    }
//
//    string name;    //이름
//    int eng, math;  //영어, 수학
//    cout << "이름 입력: ";
//    cin >> name;
//    cout << "영어점수 입력: ";
//    cin >> eng;
//    cout << "수학점수 입력: ";
//    cin >> math;
//
//    // 파일에 쓰기
//    out << name << " " << eng << " " << math << endl;
//
//    out.close();  //파일 닫기
//    cout << "데이터가 성공적으로 저장되었습니다!" << endl;
//
//    return 0;
//}
