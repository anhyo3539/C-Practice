#include <iostream>
#include <string>

using namespace std;

class Circle{
    int radius;
    string name;
    public:
    void setCircle(string name,int radius);
    double getArea();
    string getName();
};

void Circle::setCircle(string name,int radius){
    this->name=name;
    this->radius=radius;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

string Circle::getName(){
    return name;
}

class CircleManager{
    Circle *p;
    int size;
    public:
    CircleManager(int size);
    ~CircleManager();
    void setC();
    void sbn();
    void sba();
};

CircleManager::CircleManager(int size){
    p=new Circle[size];
    this->size=size;
}

CircleManager::~CircleManager(){
    delete[]p;
}

void CircleManager::setC(){
    string name;
    int radius;
    for(int i=0;i<size;i++){
        cout<<"원 "<<i+1<<"의 이름과 반지름 >>";
        cin>>name>>radius;
        p[i].setCircle(name,radius);
    }
}

void CircleManager::sbn(){
    cout<<"검색하고자하는 원의 이름 >> ";
    string name;
    cin>>name;
    for(int i=0;i<size;i++){
        if(name==p[i].getName()){
            cout<<p[i].getArea()<<"\n";
        }
    }

}

void CircleManager::sba(){
    double n;
    cout<<"최소 면적을 정수로 입력하세요 >> ";
    cin>>n;
    cout<<n<<"보다 큰 원을 검색합니다.\n";
    for(int i=0;i<size;i++){
        if(p[i].getArea()>n){
            cout<<p[i].getName()<<"의 면적은 "<<p[i].getArea()<<",";
        }
    }
}


int main(){
    int n;
    cout<<"원의 개수 >>";
    cin>>n;
    CircleManager a(n);
    a.setC();
    a.sbn();
    a.sba();
}