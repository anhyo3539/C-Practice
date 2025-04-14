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
    cout<<"----- "<<funct<<"�±��� Trace ������ ����մϴ�. ----\n";
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
    cout<<"�� ���� ������ �Է��ϼ���>>";
    cin>>a>>b;
    Trace::put("f()","������ �Է� �޾���");
    c=a+b;
    Trace::put("f()","�� ���");
    cout<<"���� "<<c<<"\n";
}

int main(){
    Trace::put("main()","���α׷� �����մϴ�");
    f();
    Trace::put("main()","����");

    Trace::print("f()");
    Trace::print();
}