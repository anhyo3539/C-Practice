#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    while(str!="yes"){
        cout<<"종료하고싶으면 yes를 입력하세요>>";
         getline(cin,str);
    }
}