//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string words[] = { "ant", "bear", "chicken", "elephant", 
//		"eagle", "horse", "lion", "monkey", "penguin", "tiger" };
//	string question;  //����
//	string answer;    //����� �Է� ��
//	int n = 1;        //���� ��ȣ
//	clock_t start, end; //����, ����ð�
//	double elapsedTime; //�ҿ�ð�
//
//	srand(time(nullptr)); //�õ� ����
//	cout << "[Ÿ�� ����], �غ�Ǹ� ����> ";
//	cin.ignore();  //���� ����
//
//	start = clock();  //����
//	while (n <= 10) {
//		cout << "\n���� " << n << endl;
//		int rndIdx = rand() % size(words);
//		question = words[rndIdx];
//		cout << question << endl;
//		getline(cin, answer);
//
//		if (answer.compare(question) == 0) {
//			cout << "���\n";
//			n++;
//		}
//		else {
//			cout << "��Ÿ! �ٽ� ����!\n";
//		}
//	}
//	end = clock(); //����
//	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//	cout << fixed;
//	cout.precision(2);
//	cout << "���� �ҿ� �ð�: " << elapsedTime << "��" << endl;
//	
//	return 0;
//}
