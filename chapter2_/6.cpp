#include <iostream>
#include <string>
using namespace std;

int main(){
    string password;
    string passworda;
    cout<<"�� ��ȣ�� �Է��ϼ���>>";
    getline(cin,password);
    cout<<"�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
    getline(cin,passworda);
    password==passworda?cout<<"�����ϴ�":cout<<"���� �ʽ��ϴ�";
}