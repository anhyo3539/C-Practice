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

	cout << "�̸��� ��ȭ��ȣ�� �Է��� �ּ���\n";
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">>";
		cin >> name>>tel;
		a[i].set(name, tel);
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << a[i].getName() << " ";
	}
	cout << "\n��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> name;
	for (int i = 0; i < 3; i++) {
		if (name == a[i].getName()) {
			cout << "��ȭ ��ȣ�� " << a[i].getTel();
			return 0;
		}
	}
}