#include <iostream>
#include <string>

using namespace std;

class person{
     string name;
     public:
     person(string name=""){this->name=name;}
     void setName(string name){this->name=name;}
     string getName(){return name;}
};

class Family{
    person *p;
    int size;
    public:
    Family(string name,int size);
    void show();
    void setName(int id,string name);
    ~Family();
};

Family::Family(string name,int size){
    this->size=size;
    p=new person[size];
    cout<<name<<" 가족은 다음과 같이 "<<size<<"명 입니다.\n";
}

void Family::show(){
    for(int i=0;i<size;i++){
        cout<<p[i].getName()<<"     ";
    }
}

void Family::setName(int id,string name){
    p[id].setName(name);
}

Family::~Family(){
    delete[]p;
}

int main(){
      Family *simpson=new Family("Simpone",3);
      simpson->setName(0,"Mr. Simpson");
      simpson->setName(1,"Mrs. Simpson");
      simpson->setName(2,"Bart Simpson");
      simpson->show();
      delete simpson;     
}