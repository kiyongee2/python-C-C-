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
//        cerr << "Error: ������ �� �� �����ϴ�.\n";
//        return 1;
//    }
//
//    // Get user input with validation
//    cout << "�̸� �Է�: ";
//    while (!(cin >> name)) {
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        cout << "�߸��� �Է��Դϴ�. �̸��� �ٽ� �Է��ϼ���: ";
//    }
//
//    cout << "�������� �Է� (0-100): ";
//    while (!(cin >> eng) || eng < 0 || eng > 100) {
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        cout << "�߸��� �Է��Դϴ�. 0-100 ������ ������ �Է��ϼ���: ";
//    }
//
//    cout << "�������� �Է� (0-100): ";
//    while (!(cin >> math) || math < 0 || math > 100) {
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        cout << "�߸��� �Է��Դϴ�. 0-100 ������ ������ �Է��ϼ���: ";
//    }
//
//    // Calculate average
//    double avg = (eng + math) / 2.0;
//
//    // Write data to file
//    out << name << " " << eng << " " << math << " " << avg << endl;
//
//    // Display confirmation
//    cout << "\n�����Ͱ� ���������� ����Ǿ����ϴ�:\n";
//    cout << "�̸�: " << name << "\n";
//    cout << "����: " << eng << "\n";
//    cout << "����: " << math << "\n";
//    cout << "���: " << avg << "\n";
//
//    out.close();
//    return 0;
//}