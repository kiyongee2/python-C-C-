//#include <iostream>
//using namespace std;
//
//int main()
//{
//	/*
//	  ������ �迭 ����, ���� �� ���
//	*/
//	int arr[3];
//
//	//����
//	/*arr[0] = 1;
//	arr[1] = 2;
//	arr[2] = 3;*/
//
//	/*
//		������ �迭 ���� �� �ʱ�ȭ
//	*/
//	//int arr[3] = { 1, 2 };
//	//int arr[3] = { 1, 2, 3 };
//
//	//�迭�� ũ�� - size()
//	//cout << size(arr) << endl;
//
//	//���
//	/*for (int i = 0; i < size(arr); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << "\n=================\n";*/
//
//	//��� ���� - 1�� �ε��� ����
//	//arr[1] = 5;
//
//	//for (int i = 0; i < size(arr); i++)
//	//	cout << arr[i] << " ";
//
//	//cout << "\n=================\n";
//
//	////��� ���� - 1�� �ε��� ����
//	//for (int i = 1; i < size(arr); i++)
//	//	arr[i] = arr[i + 1];
//
//	//for (int i = 0; i < size(arr)-1; i++)
//	//	cout << arr[i] << " ";
//
//	/*
//		������ �հ�� ���, �ִ밪, �ּҰ�
//	*/
//	int score[4] = { 70, 90, 80, 65 };
//	int total = 0;  //�հ�
//	double avg;     //���
//	int max, min;   //�ִ밪, �ּҰ�
//
//	//�迭�� ��� ����
//	cout << size(score) << endl;
//
//	/*for (int i = 0; i < size(score); i++)
//	{
//		cout << score[i] << " ";
//	}*/
//
//	// �հ� ���
//	for (int i = 0; i < size(score); i++)
//	{
//		total += score[i];
//	}
//	cout << "�հ� : " << total << endl;
//
//	// ��� ��� : �հ� / ����
//	avg = total / (double)size(score);
//	cout << "��� : " << avg << endl;
//
//	//�ִ밪
//	max = score[0]; //ù° ��� �ִ밪���� ����
//	for (int i = 1; i < size(score); i++)
//	{
//		if (score[i] > max)
//		{
//			max = score[i];
//		}
//	}
//	cout << "�ִ밪 : " << max << endl;
//
//	//�ּҰ�
//	min = score[0]; //ù° ��� �ּҰ����� ����
//	for (int i = 1; i < size(score); i++)
//	{
//		if (score[i] < min)
//		{
//			min = score[i];
//		}
//	}
//	cout << "�ּҰ� : " << min << endl;
//
//	return 0;
//}