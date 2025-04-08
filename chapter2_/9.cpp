#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    string adress;
    int age;
    cout<<"이름은?";
    cin>>name;
    cout<<"주소는?";
    cin.get();
    getline(cin,adress);
    cout<<"나이는?";
    cin>>age;
    cout<<name<<", "<<adress<<", "<<age<<" 세";
}