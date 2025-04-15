#include <iostream>
#include <fstream>  //ofstream 사용
#include <string>
using namespace std;

int main()
{
    ofstream f1("data.txt"); // 파일 쓰기 객체 생성
    int x = 1, y = 2;

    if (!f1) { 
        cerr << "파일을 열 수 없습니다.\n";
        return 1; // 오류 코드 반환
    }

    // 파일에 쓰기
    f1 << "Good Job!\n";
    f1 << x << " " << y << endl;
    
    f1.close();  // 파일 닫기
 
    //cout << "데이터가 성공적으로 저장되었습니다!" << endl;

    ifstream fin("data.txt");
    if (fin.fail()) {
        cerr << "파일을 찾을 수 없습니다.\n";
    }

    string str;
    while (!fin.eof()) {
        getline(fin, str);
        cout << str << endl;
    }
    /*while (getline(fin, str)) {
        cout << str << endl;
    }*/

    fin.close();

	return 0;
}

