#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class person {
	string name;
	string tel;
public:
	person();
	string getName() { return name; }
	string getTel() { return tel; };
	void set(string name,string tel);
};

person::person() {
	name = "";
	tel = "";
}

void person::set(string name,string tel) {
	this->name = name;
	this->tel = tel;
}


int main() {
	person a[3];
	string name, tel;

	cout << "이름과 전화번호를 입력해 주세요\n";
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">>";
		cin >> name>>tel;
		a[i].set(name, tel);
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << a[i].getName() << " ";
	}
	cout << "\n전화번호를 검색합니다. 이름을 입력하세요>>";
	cin >> name;
	for (int i = 0; i < 3; i++) {
		if (name == a[i].getName()) {
			cout << "전화 번호는 " << a[i].getTel();
			return 0;
		}
	}
}