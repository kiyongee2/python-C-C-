#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

vector<string> split(string str, char delimiter) {
    vector<string> result;
    stringstream ss(str);  // ���ڿ��� ��Ʈ������ ��ȯ
    string token;

    while (getline(ss, token, delimiter)) {
        result.push_back(token);
    }
    return result;
}

int main() {
    string text = "apple,banana,grape";
    vector<string> words = split(text, ',');

    for (string word : words) {
        cout << word << endl;
    }

    return 0;
}
