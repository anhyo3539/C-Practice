#include <iostream>
#include <string>

using namespace std;

class person{
    int id;
    double weight;
    string name;
    public:
    person(int id=1,string name="Grace",double weight=20.5);
    void show(){cout<<id<<" "<<weight<<" "<<name<<"\n";  }
};

person::person(int id,string name,double weight){
    this->id=id;
    this->name=name;
    this->weight=weight;
}

int main(){
    person grace,ashley(2,"Ashley"),helen(3,"Helen",32.5);
    grace.show();
    ashley.show();
    helen.show();
}