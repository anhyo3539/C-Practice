#include <iostream>
#include <string>

using namespace std;

class Trace{
    static string ft[100];
    static string pc[100];
    static int top;
    public:
    static void put(string function,string process);
    static void print(string function="");
};

string Trace::ft[] = {};
string Trace::pc[] = {};
int Trace::top=-1;

void Trace::put(string function,string process){
    top++;
    ft[top]=function;
    pc[top] = process; 
}

void Trace::print(string funct){
    cout<<"----- "<<funct<<"태그의 Trace 정보를 출력합니다. ----\n";
    if(funct!=""){
        for(int i=0;i<=top;i++){
            if(ft[i]==funct){
                cout<<funct<<":"<<pc[i]<<"\n";
            }
        }
    }
    else{
        for(int i=0;i<=top;i++){
            cout<<ft[i]<<":"<<pc[i]<<"\n";
        }
    }
}

void f(){
    int a,b,c;
    cout<<"두 개의 정수를 입력하세요>>";
    cin>>a>>b;
    Trace::put("f()","정수를 입력 받았음");
    c=a+b;
    Trace::put("f()","합 계산");
    cout<<"합은 "<<c<<"\n";
}

int main(){
    Trace::put("main()","프로그램 시작합니다");
    f();
    Trace::put("main()","종료");

    Trace::print("f()");
    Trace::print();
}