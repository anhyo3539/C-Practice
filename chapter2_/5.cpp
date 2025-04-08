#include <iostream>
#include <string>

using namespace std;

int main(){
     string str;
     int count=0;
     cout<<"문자들을 입력하라(100개미만).\n";
     getline(cin,str);
     for(int i=0;i<str.length();i++){
        if(str[i]=='x')count++;
     }
     cout<<"x의 개수는 "<<count;
}