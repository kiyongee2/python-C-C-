//#include <iostream>
//using namespace std;
//
//int main()
//{
//	bool run = true;  //���� ����
//	int score[3] = {0};
//	
//	while (run) {
//		cout << "--------------------------------------------\n";
//		cout << "1.�����Է� | 2.��������Ʈ | 3.�м� | 4.����\n" ;
//		cout << "--------------------------------------------\n";
//		cout << "����> ";
//		int choice;
//		int total = 0;
//		float average;
//		int max;
//
//		cin >> choice;  //�޴� ����(�Է�)
//
//		switch (choice) {
//		case 1:
//			for (int i = 0; i < size(score); i++) {
//				cout << "score[" << i << "]=";
//				cin >> score[i];
//			}
//			break;
//		case 2:
//			for (int i = 0; i < size(score); i++) {
//				cout << "score[" << i << "]=" << score[i] << endl;
//			}
//			break;
//		case 3:
//			//�������, �ְ�����
//			max = score[0];     //�ִ밪 ����
//			for (int i = 0; i < size(score); i++) {
//				total += score[i];  //����
//				
//				if (score[i] > max) //�ְ����� 
//					max = score[i];
//			}
//			average = (float)total / size(score);
//
//			cout << fixed;  //�Ҽ� �ڸ��� ����
//			cout.precision(1); 
//			cout << "��� ����: " << average << endl;
//			cout << "�ְ� ����: " << max << endl;
//			break;
//		case 4:
//			cout << "���α׷� ����!\n";
//			run = false;
//			break;
//		default:
//			cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���\n";
//			break;
//		}
//	}//while() ����
//	
//	return 0;
//}