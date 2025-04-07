//#include <iostream>
//#include <array>
//using namespace std;
//
//class ManageDataStructure {
//public:
//	int currentIdx;
//	array<int, 10> dataQueue;
//
//	ManageDataStructure();
//};
//
//ManageDataStructure::ManageDataStructure() :
//	currentIdx(0), dataQueue{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }{
//}
//
//int main() {
//
//	int data;
//	ManageDataStructure dataStructure;
//
//	//index를 직접 지정했을 때 오류 발생
//	dataStructure.currentIdx = 8;
//	data = dataStructure.dataQueue[dataStructure.currentIdx];
//
//	cout << "Data [" << dataStructure.currentIdx << "] : " << data << endl;
//
//	return 0;
//}