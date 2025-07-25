//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//
//    string str = "Hello World";
//
//    //문자열의 길이
//    cout << str.length() << endl;  // 11
//    
//    //문자열 인덱싱
//    cout << str.at(0) << endl;     // H
//    cout << str[6] << endl;        // W
//
//    string jumin = "030815-4567890";
//    char gender = jumin.at(7); //4
//
//    switch (gender) {
//    case '1': case '3':
//        cout << "남자" << endl;
//        break;
//    case '2': case '4':
//        cout << "여자" << endl;
//        break;
//    }
//    
//    // 문자열 자르기(추출)
//    string sub = str.substr(0, 5);  // "Hello"
//    cout << sub << endl;
//
//    // 대체
//    str.replace(6, 5, "Korea");        
//    cout << str << endl;         // "Hello Korea"
//
//    // 찾기
//    int pos = str.find("Korea");  //찾으면 위치 반환 6
//    //int pos = str.find("Java"); //찾지 못하면 -1
//    cout << pos << endl;
//
//    // 비교
//    string a = "apple", b = "banana";
//    if (a.compare(b) < 0)
//        cout << "a가 b보다 작음" << endl;
//    if (a.compare(b) == 0)
//        cout << "a와 b는 같은 문자열임" << endl;
//
//    return 0;
//}
