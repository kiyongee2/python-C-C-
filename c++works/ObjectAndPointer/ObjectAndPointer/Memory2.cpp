#include <iostream>
using namespace std;

int main()
{
	//���� ������ �迭 ����
    int n;
    int sum = 0;
    double avg;

    cout << "*** ������ ��� ��� ���α׷� ***\n";
    cout << "�Է��� ������ ����: ";
    cin >> n;  //�迭�� ũ��
    int* pn = new int[n];

    //���� �Է�
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "��° ���� : ";
        cin >> pn[i];
    }

    //�հ� ���
    for (int i = 0; i < n; i++) {
        // cout << pn[i] << endl;
        sum += pn[i];
    }
    //��� ���
    avg = (double)sum / n;

    cout << fixed;      //�Ҽ��� ����
    cout.precision(2);  //�Ҽ� 2°�ڸ�
    cout << "��� : " << avg << endl;

    delete[] pn;  //�޸� �ݳ�

    return 0;
}
