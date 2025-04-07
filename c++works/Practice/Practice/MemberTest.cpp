#include <iostream>
using namespace std;

class Member {
private:
	string id;
	string password;

public:
	Member(string id, string password) : id(id), password(password) {}
	void showMemberInfo();
};
void Member::showMemberInfo() {
	cout << "아이디: " << id << ", 패스워드: " << password << endl;
}

int main()
{
	//정적 배열 
	/*Member members[3] = {
		Member("flower", "f1234"),
		Member("tree", "t1234"),
		Member("bird", "b1234")
	};

	for (int i = 0; i < 3; i++) {
		members[i].showMemberInfo();
	}*/

	//동적 배열
	Member* member = new Member[3]{
		Member("flower", "f1234"),
		Member("tree", "t1234"),
		Member("bird", "b1234")
	};

	for (int i = 0; i < 3; i++) {
		member[i].showMemberInfo();
	}

	delete[] member;

	return 0;
}