#include <iostream>
using namespace std;

int sum(int n){
    return {n*(n+1)/2};
}

int main(){
    int n;
    cout <<"끝 수를 입력하세요>>";
    cin>>n;
    cout<<"1에서 "<<n<<"까지의 합은 "<<sum(n)<<"입니다.\n";
}