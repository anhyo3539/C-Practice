#include <iostream>
#include <string>

using namespace std;

class MyIntstack{
    int p[10];
    int tos;
    public:
    MyIntstack();
    bool push(int n);
    bool pop(int &n);
};

MyIntstack::MyIntstack(){
    tos=-1;
}

bool MyIntstack::push(int n){
    if(tos==9){
        return false;
    }
    tos++;
    p[tos]=n;
    return true;
}

bool MyIntstack::pop(int &n){
    if(tos==-1){
        return false;
    }
    n=p[tos];
    tos--;
    return true;
}

int main(){
    MyIntstack a;
    for(int i=0;i<11;i++){
        if(a.push(i)){
            cout<<i<<" ";
        }
        else {
            cout<<"\n"<<i+1<<" 번째 stack full\n";
        }
    }
    int n;
    for(int i=0;i<11;i++){
        if(a.pop(n)){
            cout<<n<<" ";
        }
        else{
            cout<<"\n"<<i+1<<"번째 stack empty";
        }
    }
}