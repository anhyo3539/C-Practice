#include <iostream>

using namespace std;

class  Tower{
         int height;
    public:
    Tower();
    Tower(int high);
    int getHeight(){return height;};
};

Tower::Tower():Tower(1){};

Tower::Tower(int high){
    height=high;
}

int main(){
   Tower myTower;
   Tower seoulTower(100);
   cout<<"���̴� "<<myTower.getHeight()<<"����\n"<<"���̴� "<<seoulTower.getHeight()<<" ����";
}