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
        cout<<"�� "<<i+1<<"�� �̸��� ������ >>";
        cin>>name>>radius;
        p[i].setCircle(name,radius);
    }
}

void CircleManager::sbn(){
    cout<<"�˻��ϰ����ϴ� ���� �̸� >> ";
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
    cout<<"�ּ� ������ ������ �Է��ϼ��� >> ";
    cin>>n;
    cout<<n<<"���� ū ���� �˻��մϴ�.\n";
    for(int i=0;i<size;i++){
        if(p[i].getArea()>n){
            cout<<p[i].getName()<<"�� ������ "<<p[i].getArea()<<",";
        }
    }
}


int main(){
    int n;
    cout<<"���� ���� >>";
    cin>>n;
    CircleManager a(n);
    a.setC();
    a.sbn();
    a.sba();
}