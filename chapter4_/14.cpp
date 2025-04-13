#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player{
    string name;
    public:
    void setName(string name){this->name=name;}
    string getName(){return name;}
};

class Gambling{
    Player *p;
    int Pn;
    public:
    Gambling();
    ~Gambling(){delete[]p;}
    void start();
}; 

Gambling::Gambling(){
    cout<<"***** �׺� ������ �����մϴ�. *****\n";
    srand(unsigned(time(0)));
    string name;
    Pn=2;
    p=new Player[Pn];
    for(int i=0;i<Pn;i++){
        cout<<i+1<<"��° ���� �̸�>>";
        cin>>name;
        p[i].setName(name);
    }
}

void Gambling::start(){
    int pn=0;
    int n[3];
    cin.get();
    while(1){
        cout<<p[pn].getName()<<": <Enter>";
        cin.get();
        n[0]=rand()%3; n[1]=rand()%3; n[2]=rand()%3;
        cout<<"             ";
        for(int i=0;i<3;i++){
            cout<<n[i]<<"   ";
        }
        if(n[0]==n[1]&&n[0]==n[2]){
            cout<<p[pn].getName()<<"���� �¸�!!";
            break;
        }
        else{
            cout<<"�ƽ�����!\n";
        }
        if(pn){
            pn--;
        }
        else{pn++;}
    }
}

int main(){
      Gambling game;
      game.start();
}