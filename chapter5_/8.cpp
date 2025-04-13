#include <iostream>
#include <string>

using namespace std;

class MyIntstack{
    int *p;
    int size;
    int tos;
    public:
    MyIntstack(int n=10);
    MyIntstack(MyIntstack& b);
    ~MyIntstack(){delete[]p;}
    bool push(int n);
    bool pop(int &n);
    int getnum(int n){return p[n];}
};

MyIntstack::MyIntstack(int n){
    size=n;
    p=new int [size];
    tos=-1;
}

MyIntstack::MyIntstack(MyIntstack& b){
    size=b.size;
    p=new int [size];
    for(int i=0;i<size;i++){
        p[i]=b.getnum(i);
    }
    tos=b.tos;
}

bool MyIntstack::push(int n){
    if(tos==size-1){
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
    MyIntstack a(10);
    a.push(10);
    a.push(20);
    MyIntstack b=a;
    b.push(30);

    int n;
    a.pop(n);
    cout<<"스택 a에서 팝한 값 >>"<<n<<"\n";
    b.pop(n);
    cout<<"스택 b에서 팝한 값 >>"<<n<<"\n";
}