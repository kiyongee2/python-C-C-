//#include <iostream>
//
//using namespace std;
//
//bool average(int a[], int size, int &avg) {
//	if (size <= 0)
//		return false;
//	int sum = 0;
//	for (int i = 1; i < size; i++) {
//		sum += a[i];
//	}
//	avg = sum / size;
//
//	return true;
//}
//
//int main()
//{
//	/* //�⺻ Ÿ�� ������ ���� ����
//	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
//	int i = 1;
//	int n = 2;
//	int& refn = n; //�������� refn ����. refn�� n�� ���� ����
//	n = 4;
//	refn++;
//	cout << i << '\t' << n << '\t' << refn << endl;
//
//	refn = i;  
//	refn++;
//	cout << i << '\t' << n << '\t' << refn << endl;
//
//	//������ ���� ������ ���� ����
//	int* p = &refn;
//	*p = 20;
//	cout << i << '\t' << n << '\t' << refn << endl;*/
//
//	//���� �Ű������� �̿��Ͽ� ��� ����
//	int x[] = { 1, 2, 3, 6};
//	int avg;
//
//	if (average(x, 4, avg)) cout << "����� " << avg << endl;
//	else cout << "�Ű� ���� ���� " << endl;
//
//	if (average(x, -1, avg)) cout << "����� " << avg << endl;
//	else cout << "�Ű� ���� ���� " << endl;
//
//	return 0;
//}