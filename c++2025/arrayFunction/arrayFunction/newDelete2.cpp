//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num;     //�迭�� ����
//	int sum = 0; //����
//	float avg;   //���
//	int* score;  //������ ������ ������
//
//	cout << "*** ������ ��� ��� ���α׷� ***\n";
//	cout << "�Է��� ������ ����: ";
//	cin >> num;
//	
//	score = new int[num]; //�迭�� ���� �Ҵ�
//	if (score == nullptr) {
//		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.\n";
//		return -1;
//	}
//
//	//���� �Է� �� ���� ���
//	for (int i = 0; i < num; i++) {
//		cout << i + 1 << "��° ����: ";
//		cin >> score[i];
//
//		sum += score[i];
//	}
//
//	//���
//	avg = (float)sum / num;
//
//	cout << fixed;
//	cout.precision(1);
//	cout << "���: " << avg << endl;
//
//	delete[] score;  //�޸� ����
//
//	return 0;
//}