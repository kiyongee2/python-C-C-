#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    int& x = n; //���� n�� ���纻(��Ī)
    int& y = n;

    cout << "x = " << &x << endl;
    cout << "y = " << x << endl;
    cout << "y = " << &n << endl;

    x = 3;
    cout << "x = " << x << endl;

    y = 3;
    cout << "y = " << x << endl;

    return 0;
}
