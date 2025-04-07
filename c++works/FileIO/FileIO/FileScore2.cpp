//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    ofstream out;
//    string name;
//    int eng, math;
//
//    // Open file for writing
//    out.open("score.txt");
//    if (out.fail()) {
//        cerr << "Error: 파일을 열 수 없습니다.\n";
//        return 1;
//    }
//
//    // Get user input with validation
//    cout << "이름 입력: ";
//    while (!(cin >> name)) {
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        cout << "잘못된 입력입니다. 이름을 다시 입력하세요: ";
//    }
//
//    cout << "영어점수 입력 (0-100): ";
//    while (!(cin >> eng) || eng < 0 || eng > 100) {
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        cout << "잘못된 입력입니다. 0-100 사이의 점수를 입력하세요: ";
//    }
//
//    cout << "수학점수 입력 (0-100): ";
//    while (!(cin >> math) || math < 0 || math > 100) {
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        cout << "잘못된 입력입니다. 0-100 사이의 점수를 입력하세요: ";
//    }
//
//    // Calculate average
//    double avg = (eng + math) / 2.0;
//
//    // Write data to file
//    out << name << " " << eng << " " << math << " " << avg << endl;
//
//    // Display confirmation
//    cout << "\n데이터가 성공적으로 저장되었습니다:\n";
//    cout << "이름: " << name << "\n";
//    cout << "영어: " << eng << "\n";
//    cout << "수학: " << math << "\n";
//    cout << "평균: " << avg << "\n";
//
//    out.close();
//    return 0;
//}