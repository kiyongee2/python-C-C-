//#include <iostream>
//using namespace std;
//
////���� ���� ����
//bool run = true;  //���� ����
//int studentNum;   //�л� ��
//int* score;  //����(���� �迭)
//
//void getStudentNum() { //�л���
//	if (score != nullptr) {
//		delete[] score;  //�޸� ����
//		score = nullptr;
//	}
//
//	cout << "�л��� �Է�: ";
//	cin >> studentNum;
//	score = new int[studentNum];
//	if (score == nullptr) {
//		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.\n";
//		return;
//	}
//}
//
//void scoreNullptr() { //2, 3, 4 �޴��� ���� ������ ���
//	if (score == nullptr) {
//		puts("���� �л����� �Է��ϼ���.");
//		return;
//	}
//}
//
//void inputScore() { //���� �Է�
//	scoreNullptr();
//
//	for (int i = 0; i < studentNum; i++) {
//		cout << "score[" << i << "]=";
//		cin >> score[i];
//	}
//}
//
//void getScoreList() { //���� ����Ʈ
//	scoreNullptr();
//
//	for (int i = 0; i < studentNum; i++) {
//		cout << "score[" << i << "]=" << score[i] << endl;
//	}
//}
//
//void calculate() { //�м� ���
//	scoreNullptr();
//
//	int total = 0; //����
//	int max = score[0]; //�ִ밪 ����
//	float average; //���
//
//	for (int i = 0; i < studentNum; i++) {
//		total += score[i];  //����
//
//		if (score[i] > max) //�ְ����� ��
//			max = score[i];
//	}
//	average = (float)total / studentNum;
//
//	cout << fixed;  //�Ҽ� �ڸ��� ����
//	cout.precision(1);
//	cout << "��� ����: " << average << endl;
//	cout << "�ְ� ����: " << max << endl;
//}
//
//int main()
//{
//	while (run) {
//		cout << "------------------------------------------------------\n";
//		cout << "1.�л��� | 2.�����Է� | 3.��������Ʈ | 4.�м� | 5.����\n";
//		cout << "------------------------------------------------------\n";
//		cout << "����> ";
//
//		int choice;       //�޴� ����
//		cin >> choice;  //�޴� ����
//
//		switch (choice) {
//		case 1:
//			getStudentNum();
//			break;
//		case 2:
//			inputScore();
//			break;
//		case 3:
//			getScoreList();
//			break;
//		case 4:
//			calculate();
//			break;
//		case 5:
//			cout << "���α׷� ����!\n";
//			run = false;
//			break;
//		default:
//			cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���\n";
//			break;
//		}
//	}
//
//	return 0;
//}
//
