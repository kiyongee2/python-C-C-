#include <iostream>
using namespace std;

int main()
{
	//동적 포인터 배열 연산
    int n;
    int sum = 0;
    double avg;

    cout << "*** 점수의 평균 계산 프로그램 ***\n";
    cout << "입력할 정수의 개수: ";
    cin >> n;  //배열의 크기
    int* pn = new int[n];

    //점수 입력
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "번째 점수 : ";
        cin >> pn[i];
    }

    //합계 계산
    for (int i = 0; i < n; i++) {
        // cout << pn[i] << endl;
        sum += pn[i];
    }
    //평균 계산
    avg = (double)sum / n;

    cout << fixed;      //소수점 고정
    cout.precision(2);  //소수 2째자리
    cout << "평균 : " << avg << endl;

    delete[] pn;  //메모리 반납

    return 0;
}
