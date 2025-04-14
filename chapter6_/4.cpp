#include <iostream>
#include <string>

using namespace std;

class Myvector{
    int *mem;
    int size;
    public:
    Myvector(int n=100,int val=0);
    ~Myvector(){delete[]mem;}
    void show();
};

Myvector::Myvector(int n,int val){
    mem=new int [n];
    size=n;
    for(int i=0;i<size; i++){
        mem[i]=val;
    }
}

void Myvector::show(){
    for(int i=0;i<size;i++){
        cout<<mem[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    Myvector a;
    Myvector b(34,7);
    a.show();
    b.show();
}