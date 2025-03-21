#include <iostream>
#include <cstdlib>  // srand(), rand()
#include <ctime>    // time()
using namespace std;

int main()
{
    // srand(10); // seed �� ����(����)
    srand(time(NULL));  // seed �� ����(����)

    int rndVal = rand();
    cout << rndVal << endl;
    cout << "============" << endl;

    // ����(2���� ���)
    int coin = rand() % 2;
    cout << coin << endl;

    // 0-�ո�, 1-�޸�
    if (coin % 2 == 0)
    {
        cout << "�ո�" << endl;
    }
    else
    {
        cout << "�޸�" << endl;
    }

    //�ֻ��� ��
    /*int dice = rand() % 6 + 1;
    cout << dice << endl;*/

    //�ֻ��� 10�� ������
    for (int i = 1; i <= 10; i++)
    {
        int dice = rand() % 6 + 1;
        cout << dice << endl;
    }
    cout << "================\n";

    //���� ����
    string seasons[] = {"��", "����", "����", "�ܿ�"};
    //cout << seasons[1] << endl;
    cout << size(seasons) << endl;

    int idx = rand() % size(seasons);  //�迭 �ε��� 
    cout << seasons[idx] << endl;

    return 0;
}
