#include <iostream>
#include <array>
using namespace std;

class ManageDataStructure {
private:
	int currentIdx;
	array<int, 10> dataQueue;

public:
	ManageDataStructure();
	int getCurrentIdx() { return currentIdx; }
	void setCurrentIdx(int newIdx);
	int getArrayValue(){ return dataQueue[currentIdx]; }
};

ManageDataStructure::ManageDataStructure() :
	currentIdx(0), dataQueue{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } {}

void ManageDataStructure::setCurrentIdx(int newIdx) {
	if (newIdx < 0 || newIdx >= 10)
		return;   //���� ����
	currentIdx = newIdx;
}

int main() {

	int index, data;
	ManageDataStructure dataStructure;

	dataStructure.setCurrentIdx(-1);  //������ ��������� �ʱ�ȭ ��
	index = dataStructure.getCurrentIdx();
	data = dataStructure.getArrayValue();

	cout << "Data [" << index << "] : " << data << endl;

	return 0;
}