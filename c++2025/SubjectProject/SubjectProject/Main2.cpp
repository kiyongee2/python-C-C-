
#include "Students.h"

int main() {

	//인스턴스 생성
	Students park(1001, "박상희");

	//과목 입력
	park.addSubject("국어", 90);
	park.addSubject("미술", 75);
	park.addSubject("음악", 85);

	//출력
	park.showInfo();

	return 0;   
}