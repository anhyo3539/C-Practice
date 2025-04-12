#include <iostream>
#include <string>
using namespace std;

int main(){
    string password;
    string passworda;
    cout<<"새 암호를 입력하세요>>";
    getline(cin,password);
    cout<<"새 암호를 다시 한 번 입력하세요>>";
    getline(cin,passworda);
    password==passworda?cout<<"같습니다":cout<<"같지 않습니다";
}