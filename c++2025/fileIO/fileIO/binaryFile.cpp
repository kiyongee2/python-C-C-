//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//    int num = 1234;
//
//    // ���̳ʸ� ���� ����
//    ofstream fout("data.bin", ios::binary);
//
//    //&num�� ���� �ּ�
//    //(char*) ����ȯ - write�Լ��� ���� �迭�� ����
//    fout.write((char*)&num, sizeof(num));
//    fout.close();
//
//    // ���̳ʸ� ���� �б�
//    ifstream fin("data.bin", ios::binary);
//
//    int readNum;
//    fin.read((char*)&readNum, sizeof(readNum));
//    cout << readNum << endl;
//    fin.close();
//
//    return 0;
//}
