#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    string adress;
    int age;
    cout<<"�̸���?";
    cin>>name;
    cout<<"�ּҴ�?";
    cin.get();
    getline(cin,adress);
    cout<<"���̴�?";
    cin>>age;
    cout<<name<<", "<<adress<<", "<<age<<" ��";
}