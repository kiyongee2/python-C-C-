//#include <iostream>
//#include <string>
//#include <cstdlib>  // srand(), rand()
//#include <ctime>    // time()
//using namespace std;
//
//int main()
//{
//    string words[] = { "sun", "moon", "earth", "galaxy", "sky", "sea", 
//            "mountain", "river", "flower", "tree", "human", "animal"};
//    string question;  //����
//    string answer;    //����� �Է�
//    clock_t start, end; 
//    double elapsedTime; //���� �ҿ� �ð�
//    int n = 1;  //���� ��ȣ
//
//    srand(time(NULL));  //���� �õ� ����
//    cout << "���� Ÿ�ڰ���, �غ�Ǹ� ����>";
//    getchar();
//
//    start = clock();  //���� �ð�
//
//    while (n <= 10)
//    {
//        cout << "\n���� " << n << endl;
//        int idx = rand() % size(words); //����(�ε���)
//        question = words[idx];
//        cout << question << endl;  //���� ����
//        cin >> answer;
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
//    return 0;
//}


/*
  @ ���� Ÿ�� ���� ����
    �������� ���õ� �ܾ �����ǰ�, ����ڰ� �� �ܾ ��Ȯ��
    �Է��ϸ� ���, �׷��� ������ �ٽ� �õ�.
    �� 10���� �ܾ ���߸� ������ ����ǰ�, ���� �ҿ� �ð��� ���.
*/