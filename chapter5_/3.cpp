#include <iostream>
#include <string>

using namespace std;

void combine(string a,string b,string &c){
    c=a+" "+b;
}

int main(){
    string a("I love you"),b("very much");
    string c;
    combine(a,b,c);
    cout<<c;
}