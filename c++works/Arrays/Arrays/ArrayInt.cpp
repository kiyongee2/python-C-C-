//#include <iostream>
//using namespace std;
//
//int main()
//{
//	/*
//	  정수형 배열 선언, 저장 및 출력
//	*/
//	int arr[3];
//
//	//저장
//	/*arr[0] = 1;
//	arr[1] = 2;
//	arr[2] = 3;*/
//
//	/*
//		정수형 배열 선언 및 초기화
//	*/
//	//int arr[3] = { 1, 2 };
//	//int arr[3] = { 1, 2, 3 };
//
//	//배열의 크기 - size()
//	//cout << size(arr) << endl;
//
//	//출력
//	/*for (int i = 0; i < size(arr); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << "\n=================\n";*/
//
//	//요소 수정 - 1번 인덱스 수정
//	//arr[1] = 5;
//
//	//for (int i = 0; i < size(arr); i++)
//	//	cout << arr[i] << " ";
//
//	//cout << "\n=================\n";
//
//	////요소 삭제 - 1번 인덱스 삭제
//	//for (int i = 1; i < size(arr); i++)
//	//	arr[i] = arr[i + 1];
//
//	//for (int i = 0; i < size(arr)-1; i++)
//	//	cout << arr[i] << " ";
//
//	/*
//		성적의 합계와 평균, 최대값, 최소값
//	*/
//	int score[4] = { 70, 90, 80, 65 };
//	int total = 0;  //합계
//	double avg;     //평균
//	int max, min;   //최대값, 최소값
//
//	//배열의 요소 개수
//	cout << size(score) << endl;
//
//	/*for (int i = 0; i < size(score); i++)
//	{
//		cout << score[i] << " ";
//	}*/
//
//	// 합계 계산
//	for (int i = 0; i < size(score); i++)
//	{
//		total += score[i];
//	}
//	cout << "합계 : " << total << endl;
//
//	// 평균 계산 : 합계 / 개수
//	avg = total / (double)size(score);
//	cout << "평균 : " << avg << endl;
//
//	//최대값
//	max = score[0]; //첫째 요소 최대값으로 설정
//	for (int i = 1; i < size(score); i++)
//	{
//		if (score[i] > max)
//		{
//			max = score[i];
//		}
//	}
//	cout << "최대값 : " << max << endl;
//
//	//최소값
//	min = score[0]; //첫째 요소 최소값으로 설정
//	for (int i = 1; i < size(score); i++)
//	{
//		if (score[i] < min)
//		{
//			min = score[i];
//		}
//	}
//	cout << "최소값 : " << min << endl;
//
//	return 0;
//}