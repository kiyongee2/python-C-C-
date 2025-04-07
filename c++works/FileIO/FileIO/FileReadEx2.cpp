//#include <iostream>
//#include <fstream>  //ofstream 사용
//#include <string>
//using namespace std;
//
//int main()
//{
//    ifstream f1("gugudan.txt"); // 파일 객체 생성
//    string str;
//
//    if (!f1) {
//        cerr << "파일을 열 수 없습니다.\n";
//        return 1; // 오류 코드 반환
//    }
//
//    // 구구단 읽기
//    while (getline(f1, str)) {
//        cout << str << endl;
//    }
//    
//    f1.close();  // 파일 닫기
//
//    return 0;
//}