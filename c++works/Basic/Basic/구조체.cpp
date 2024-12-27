#include <iostream>

using namespace std;

//구조체(사람)
struct Person {
	char name[20];
	int age;
};

int main_struct() {
	//구조체 - 다른 형의 데이터를 저장할 수 있는 자료 구조

	struct MyStruct {
		string name;
		string position;
		float height;
		float weight;
	};

	/*MyStruct player;
	player.name = "황인범";
	player.position = "미드필더";
	player.height = 180.5;
	player.weight = 70.2;*/

	/*MyStruct player = {
		"황인범",
		"Striker",
		180.5,
		72.5
	};

	cout << player.name << endl;*/

	MyStruct player[2] = {
		{"이강인", "Striker", 180.5, 72.5},
		{"황인범", "Striker", 180.5, 72.5}
	};

	cout << player[0].position << endl;

	// 열거체(enum) - 기호 상수를 만드는 것에 대한 또 다른 방법
	enum weekday {월, 화, 수, 목, 금, 토, 일};

	weekday day = 월;

	cout << 월 << endl;
	cout << 월 + 2 << endl;

	// 동적 구조체 - Person 객체 생성
	Person* person = new Person;

	cout << "당신의 이름을 입력하세요\n";
	cin >> person->name;

	cout << "당신의 나이를 입력하세요\n";
	cin >> person->age;

	cout << "안녕하세요: " << person->name << "님~\n";
	cout << "당신은 " << person->age << "세 이군요.\n";

	return 0;
}