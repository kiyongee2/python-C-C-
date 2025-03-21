#include <iostream>
#include <cstdlib>  // srand(), rand()
#include <ctime>    // time()
using namespace std;

int main()
{
    // srand(10); // seed 값 설정(고정)
    srand(time(NULL));  // seed 값 설정(변경)

    int rndVal = rand();
    cout << rndVal << endl;
    cout << "============" << endl;

    // 동전(2가지 경우)
    int coin = rand() % 2;
    cout << coin << endl;

    // 0-앞면, 1-뒷면
    if (coin % 2 == 0)
    {
        cout << "앞면" << endl;
    }
    else
    {
        cout << "뒷면" << endl;
    }

    //주사위 눈
    /*int dice = rand() % 6 + 1;
    cout << dice << endl;*/

    //주사위 10번 던지기
    for (int i = 1; i <= 10; i++)
    {
        int dice = rand() % 6 + 1;
        cout << dice << endl;
    }
    cout << "================\n";

    //문자 추출
    string seasons[] = {"봄", "여름", "가을", "겨울"};
    //cout << seasons[1] << endl;
    cout << size(seasons) << endl;

    int idx = rand() % size(seasons);  //배열 인덱스 
    cout << seasons[idx] << endl;

    return 0;
}
