#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	//���� �ܾ�� ���� ������ map �����̳�
	map<string, string> dic;
	string eng; //���� �ܾ�(Ű) ���� ����

	//�ܾ� 3�� ����
	dic.insert({ "sea", "�ٴ�" });
	dic.insert({ "korea", "���ѹα�" });
	dic.insert({ "body", "��" });
	dic["smile"] = "�̼�";  //�ܾ� �߰�

	//����� �ܾ� ã��
	while (true) {
		cout << "ã�� ���� �ܾ�(exit �Է½� ����)>> ";
		//cin >> eng;
		getline(cin, eng); //���鹮�� ���
		if (eng == "exit") break;  // ����

		if (dic.find(eng) == dic.end()) {
			cout << "ã�� �ܾ ����\n";
		}
		else {
			cout << dic[eng] << endl;
		}
	}
	cout << "�˻��� �����մϴ�\n";
	return 0;
}
