#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class book{
    char *title;
    int price;
    public:
    book(const char*title,int price);
    book(book& a);
    ~book(){delete[]title;}
    void set(char *title,int price);
    void show(){cout<<title<<" "<<price<<"원\n";}
};

book::book(const char* title,int price){
       int n=strlen(title);
       this->title=new char[n];
       strcpy(this->title,title);
       this->price=price;
}

book::book(book& a){
    int n=strlen(a.title);
    title=new char [n];
    strcpy(title,a.title);
    price=a.price;
}

void book::set(char *title,int price){
    this->title=title;
    this->price=price;
}

int main(){
    book cpp("명품C++",10000);
    book java=cpp;
    java.set("명품자바",12000);
    cpp.show();
    java.show();
}