#include <iostream>
#include <string>

using namespace std;

bool Bigger(int a,int b,int& c){
    if(a!=b){
        a>b?c=a:c=b;
    }
    return a==b?true:false;
}

int main(){
      int a,b;
      int c=0;
      cin>>a>>b;
      if(Bigger(a,b,c))
      {
        cout<<"a,b가 같다";
      }
     else{
      cout<<"더 큰 수 : "<<c;
     }
}