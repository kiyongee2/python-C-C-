//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//    int num = 1234;
//
//    // 바이너리 모드로 저장
//    ofstream fout("data.bin", ios::binary);
//
//    //&num은 시작 주소
//    //(char*) 형변환 - write함수가 문자 배열을 받음
//    fout.write((char*)&num, sizeof(num));
//    fout.close();
//
//    // 바이너리 파일 읽기
//    ifstream fin("data.bin", ios::binary);
//
//    int readNum;
//    fin.read((char*)&readNum, sizeof(readNum));
//    cout << readNum << endl;
//    fin.close();
//
//    return 0;
//}
