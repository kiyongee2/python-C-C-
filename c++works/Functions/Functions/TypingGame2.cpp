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
//    string question;  //문제
//    string answer;    //사용자 입력
//    clock_t start, end;
//    double elapsedTime; //게임 소요 시간
//    int n = 1;  //문제 번호
//    vector<int> usedIndices; // 이미 사용된 단어의 인덱스
//
//    srand(time(NULL));
//    cout << "영어 타자게임, 준비되면 엔터>";
//    getchar();
//
//    start = clock();  //시작 시간
//    while (n <= 10)
//    {
//        cout << "문제 " << n << endl;
//        int idx;
//        do {
//            idx = rand() % size(words);
//        } while (find(usedIndices.begin(), usedIndices.end(), idx) != usedIndices.end());
//        usedIndices.push_back(idx);
//
//        question = words[idx];
//        cout << question << endl;  //문제 출제
//        cin >> answer;  //사용자 단어 입력
//
//        if (answer.compare(question) == 0)
//        {
//            cout << "통과!\n";
//            n++;
//        }
//        else
//        {
//            cout << "오타! 다시 도전!\n";
//        }
//    }
//    end = clock(); //종료 시간
//    elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//    cout << "게임 소요시간: " << elapsedTime << "초" << endl;
//
//    return 0;
//}