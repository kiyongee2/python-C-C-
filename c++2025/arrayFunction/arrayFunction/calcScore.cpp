//#include <iostream>
//using namespace std;
//
//int main()
//{
//	bool run = true;  //���� ����
//	int studentNum;   //�л� ��
//	int* score = nullptr;       //����(���� �迭)
//	int choice;       //�޴� ����
//	int total, max;   //����, �ְ�����
//	float average;    //���
//	
//	while (run) {
//		cout << "------------------------------------------------------\n";
//		cout << "1.�л��� | 2.�����Է� | 3.��������Ʈ | 4.�м� | 5.����\n" ;
//		cout << "------------------------------------------------------\n";
//		cout << "����> ";
//
//		cin >> choice;  //�޴� ����
//
//		switch (choice) {
//		case 1:
//			cout << "�л��� �Է�: ";
//			cin >> studentNum;
//			score = new int[studentNum];
//			break;
//		case 2:
//			for (int i = 0; i < studentNum; i++) {
//				cout << "score[" << i << "]=";
//				cin >> score[i];
//			}
//			break;
//		case 3:
//			for (int i = 0; i < studentNum; i++) {
//				cout << "score[" << i << "]=" << score[i] << endl;
//			}
//			break;
//		case 4:
//			//�������, �ְ�����
//			total = 0;
//			max = score[0];     //�ִ밪 ����
//			for (int i = 0; i < studentNum; i++) {
//				total += score[i];  //����
//				
//				if (score[i] > max) //�ְ����� 
//					max = score[i];
//			}
//			average = (float)total / studentNum;
//
//			cout << fixed;  //�Ҽ� �ڸ��� ����
//			cout.precision(1); 
//			cout << "��� ����: " << average << endl;
//			cout << "�ְ� ����: " << max << endl;
//			break;
//		case 5:
//			cout << "���α׷� ����!\n";
//			run = false;
//			break;
//		default:
//			cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���\n";
//			break;
//		}
//	}//while() ����
//
//	delete[] score;
//	
//	return 0;
//}