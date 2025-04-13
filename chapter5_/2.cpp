#include <iostream>
#include <string>
using namespace std;

void half(double& a){
    a=a/2;
}

int main(){
       double a=20;
       half(a);
       cout<<a;
}