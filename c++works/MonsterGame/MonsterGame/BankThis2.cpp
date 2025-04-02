#include <iostream>
#include <string>
using namespace std;

class bank {
private:
	int safe; //�ݰ�
	string bank_name;

public:
	bank(string name) : bank_name(name) { safe = 0; };  //�⺻ ������  
	~bank() {};
	void use_counter(int _in, int _out);  //����� â�� �Լ�
	void transfer_account(int safe);      // ���� ���� �Լ�
	void reset_account();                 // ���� �ʱ�ȭ
	int get_safe() { return safe; };      // �ݰ� �ݾ� ��ȯ
	bank& deposit_interest(int interest); // ���� �Ա�
	bank& withdraw_utility(int utility);  // ������ ���
	bank& withdraw_tax(int tax);          // ���� ���

	string get_bank_name() { return bank_name; };
};

void bank::use_counter(int _in, int _out) {
	safe += _in;
	safe -= _out;
	cout << bank_name << " ó�� - �Ա�: " << _in << ", ���: " << _out << endl;
}

void bank::transfer_account(int safe) {
	this->safe = safe;
	cout << bank_name << "���� ���� �̵�: " << safe << endl;
}

void bank::reset_account() {
	this->safe = 0;
	cout << bank_name << " ���°� �ʱ�ȭ �Ǿ����ϴ�." << endl;
}

bank& bank::deposit_interest(int interest) {
	safe += interest;
	cout << bank_name << " ���� ����: " << interest << endl;
	return *this;
}

bank& bank::withdraw_utility(int utility) {
	safe -= utility;
	cout << bank_name << " ������ ����: " << utility << endl;
	return *this;
}

bank& bank::withdraw_tax(int tax) {
	safe -= tax;
	cout << bank_name << " ���� ����: " << tax << endl;
	return *this;
}

int main() {
	bank rich_bank("������ ����"), global_bank("������ ����");
	rich_bank.use_counter(50, 10);
	cout << endl;

	global_bank.transfer_account(rich_bank.get_safe());
	rich_bank.reset_account();
	cout << endl;

	// �Լ� ü�̴� ȣ��(�Լ��� ���ʷ� ȣ���)
	global_bank.deposit_interest(10).withdraw_utility(1).withdraw_tax(2);
	cout << endl;
	cout << global_bank.get_bank_name() << "�ܾ�: " << global_bank.get_safe() << endl;

	return 0;
}