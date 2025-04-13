#include <iostream>
#include <string>

using namespace std;

class Buffer{
    string text;
    public:
    Buffer(string text){this->text=text;}
    void add(string a){text+=a;}
    void print(){cout<<text<<"\n";}
};

Buffer &append(Buffer &a,const string b){
    a.add(b);
    return a;
}

int main(){
    Buffer buf("Hello");
    Buffer &temp=append(buf,"Guys");
    temp.print();
    buf.print();
}