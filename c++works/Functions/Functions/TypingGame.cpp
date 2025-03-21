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
//    string question;  //문제
//    string answer;    //사용자 입력
//    clock_t start, end; 
//    double elapsedTime; //게임 소요 시간
//    int n = 1;  //문제 번호
//
//    srand(time(NULL));  //랜덤 시드 설정
//    cout << "영어 타자게임, 준비되면 엔터>";
//    getchar();
//
//    start = clock();  //시작 시간
//
//    while (n <= 10)
//    {
//        cout << "\n문제 " << n << endl;
//        int idx = rand() % size(words); //난수(인덱스)
//        question = words[idx];
//        cout << question << endl;  //문제 출제
//        cin >> answer;
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
//    return 0;
//}


/*
  @ 영어 타자 게임 구현
    무작위로 선택된 단어가 출제되고, 사용자가 그 단어를 정확히
    입력하면 통과, 그렇지 않으면 다시 시도.
    총 10개의 단어를 맞추면 게임이 종료되고, 게임 소요 시간을 출력.
*/