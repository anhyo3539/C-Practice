#include <iostream>
#include <string>

using namespace std;

class Account{
    string name;
    int id;
    int money;
    public:
    Account(string name,int id,int money);
    void deposit(int m);
    string getOwner(){return name;}
    int inquiry(){return money;}
    int withdraw(int m){
        money-=m;
        return m;
    }
};

Account::Account(string name,int id,int money){
    this->name=name;
    this->id=id;
    this->money=money;
}

void Account::deposit(int m){
    money+=m;
}


int main(){
     Account a("Kitae",1,5000);
     a.deposit(50000);
     cout<<a.getOwner()<<"ÀÇ ÀÜ¾×Àº"<<a.inquiry()<<"\n";
     int money=a.withdraw(20000);
     cout<<a.getOwner()<<"ÀÇ ÀÜ¾×Àº"<<a.inquiry()<<"\n";
}