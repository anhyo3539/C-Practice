#include <iostream>
#include <string>

using namespace std;

class C{                                      //C는 circle 의 이니셜
    int radius;
    public:
    C(int r){radius=r;}
    void setR(int r){radius=r;}
    int getR(){return radius;}
    void show(){cout<<"반지름이 "<<radius<<"인 원";}
};

void increaseBy(C &a,C &b){
       int r=a.getR()+b.getR();
       a.setR(r);
}

int main(){
    C x(10),y(5);
    increaseBy(x,y);
    x.show();
}