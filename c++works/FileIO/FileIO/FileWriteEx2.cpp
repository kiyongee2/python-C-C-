//#include <iostream>
//#include <fstream>  //ofstream 사용
//using namespace std;
//
//int main()
//{
//    ofstream f1("gugudan.txt"); // 파일 쓰기 객체 생성
//
//    if (!f1) { 
//        cerr << "파일을 열 수 없습니다.\n";
//        return 1; // 오류 코드 반환
//    }
//
//    // 구구단 쓰기
//    for (int i = 2; i <= 9; i++) {
//        for (int j = 1; j <= 9; j++) {
//            f1 << i << " x " << j << " = " << (i * j) << endl;
//        }
//        f1 << endl;
//    }
//
//    f1.close();  // 파일 닫기
// 
//    cout << "데이터가 성공적으로 저장되었습니다!" << endl;
// 
//	return 0;
//}
