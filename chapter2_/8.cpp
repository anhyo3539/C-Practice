#include <iostream>
using namespace std;

int main(){
    char name[100];
    cout<<"5 명의 이름을 \';\'으로 구분하여 입력하세요\n>>";
    for(int i=0;i<5;i++){
        cin.getline(name,100,';');
        cout<<i+1<<" : "<<name<<'\n';
    }

}
