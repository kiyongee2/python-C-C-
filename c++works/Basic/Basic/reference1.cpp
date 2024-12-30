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
//	/* //기본 타입 변수에 대한 참조
//	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
//	int i = 1;
//	int n = 2;
//	int& refn = n; //참조변수 refn 선언. refn은 n에 대한 별명
//	n = 4;
//	refn++;
//	cout << i << '\t' << n << '\t' << refn << endl;
//
//	refn = i;  
//	refn++;
//	cout << i << '\t' << n << '\t' << refn << endl;
//
//	//참조에 대한 포인터 변수 선언
//	int* p = &refn;
//	*p = 20;
//	cout << i << '\t' << n << '\t' << refn << endl;*/
//
//	//참조 매개변수를 이용하여 평균 리턴
//	int x[] = { 1, 2, 3, 6};
//	int avg;
//
//	if (average(x, 4, avg)) cout << "평균은 " << avg << endl;
//	else cout << "매개 변수 오류 " << endl;
//
//	if (average(x, -1, avg)) cout << "평균은 " << avg << endl;
//	else cout << "매개 변수 오류 " << endl;
//
//	return 0;
//}