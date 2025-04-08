#include <iostream>

using namespace std;

int main(){
    int n1,n2;
    int max;
    cout<<"두 수를 입력하라>>";
    cin>>n1>>n2;
    cout<<"큰 수 = ";
    n1>n2?max=n1:max=n2;
    cout<<max;
}