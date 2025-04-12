#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1;
    string str2;
    string Eun;
    int num1;
    int num2;
    while(1){
        cout<<"? ";
        cin>>str1>>Eun>>str2;
        num1=stoi(str1);
        num2=stoi(str2);
        if(Eun=="+"){ num1+=num2; }
        if(Eun=="-"){ num1-=num2; }
        if(Eun=="*"){ num1*=num2; }
        if(Eun=="/"){ num1/=num2; }
        if(Eun=="%"){ num1%=num2; }
        cout<<str1<<" "<<Eun<<" "<<str2<<" = "<<num1<<"\n";
    }
}