//#include <iostream>
//using namespace std;
//
//class bank {
//private:
//	int safe;  //금고
//	string bank_name;
//
//public:
//	/*bank(string name){
//		bank_name = name;
//		safe = 0;  
//	}*/
//	bank(string name) : bank_name(name) { //초기화 목록 사용
//		safe = 0;  //기본 생성자
//	}
//	void use_counter(int in, int out);  //입출금 창구 함수
//	void transfer_account(int safe);    //계좌 이동
//	void reset_account();  //계좌 초기화
//	int get_safe() { return safe; }; //계좌 가져옴
//};
//
//void bank::use_counter(int in, int out) {
//	safe += in;
//	safe -= out;
//	cout << bank_name << " 처리 - 입금: " << in
//		<< ", 출금" << out << endl;
//}
//
//void bank::transfer_account(int safe) {
//	this->safe = safe;
//	cout << bank_name << "으로 계좌 이동: " << safe << endl;
//}
//
//void bank::reset_account() {
//	this->safe = 0;
//	cout << bank_name << "계좌가 초기화되었습니다." << endl;
//}
//
//int main()
//{
//	bank rich_bank("부유한 은행"), global_bank("세계적 은행");
//	/*rich_bank.use_counter(10, 10);
//	global_bank.use_counter(20, 5);*/
//
//	rich_bank.use_counter(50, 10);
//
//	//계좌 이동
//	global_bank.transfer_account(rich_bank.get_safe());
//	rich_bank.reset_account();
//
//	return 0;
//}