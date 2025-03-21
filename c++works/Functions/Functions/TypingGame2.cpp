//#include <iostream>
//#include <string>
//#include <cstdlib>  // srand(), rand()
//#include <ctime>    // time()
//#include <vector>
//#include <algorithm> // std::find
//using namespace std;
//
//int main()
//{
//    string words[] = { "ant", "bear", "chicken", "deer", "elephant", "fox",
//            "horse", "monkey", "lion", "tiger" };
//    string question;  //����
//    string answer;    //����� �Է�
//    clock_t start, end;
//    double elapsedTime; //���� �ҿ� �ð�
//    int n = 1;  //���� ��ȣ
//    vector<int> usedIndices; // �̹� ���� �ܾ��� �ε���
//
//    srand(time(NULL));
//    cout << "���� Ÿ�ڰ���, �غ�Ǹ� ����>";
//    getchar();
//
//    start = clock();  //���� �ð�
//    while (n <= 10)
//    {
//        cout << "���� " << n << endl;
//        int idx;
//        do {
//            idx = rand() % size(words);
//        } while (find(usedIndices.begin(), usedIndices.end(), idx) != usedIndices.end());
//        usedIndices.push_back(idx);
//
//        question = words[idx];
//        cout << question << endl;  //���� ����
//        cin >> answer;  //����� �ܾ� �Է�
//
//        if (answer.compare(question) == 0)
//        {
//            cout << "���!\n";
//            n++;
//        }
//        else
//        {
//            cout << "��Ÿ! �ٽ� ����!\n";
//        }
//    }
//    end = clock(); //���� �ð�
//    elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//    cout << "���� �ҿ�ð�: " << elapsedTime << "��" << endl;
//
//    return 0;
//}