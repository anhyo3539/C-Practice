#include <iostream>
#include <string>

using namespace std;

int main(){
     string str;
     int count=0;
     cout<<"���ڵ��� �Է��϶�(100���̸�).\n";
     getline(cin,str);
     for(int i=0;i<str.length();i++){
        if(str[i]=='x')count++;
     }
     cout<<"x�� ������ "<<count;
}