#include <iostream>
#include <string>

using namespace std;

class Date{
    int year;
    int month;
    int day;
    public:
    Date(int y,int m,int d);
    Date(string ymd);
    int getYear(){return year;}
    int getMonth(){return month;}
    int getDay(){return day;}
    void show(){cout<<year<<"³â"<<month<<"¿ù"<<day<<"\n";}
};

Date::Date(int y,int m,int d){
        year=y;
        month=m;
        day=d;
}

Date::Date(string ymd){
    year = stoi(ymd);
    
    int search=ymd.find('/')+1;
    string a=ymd.substr(search);
    month=stoi(a);

    search=a.find('/')+1;
    a=a.substr(search);
    day=stoi(a);
}

int main(){
    Date Birth(2014,3,20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout<<Birth.getYear()<<","<<Birth.getMonth()<<","<<Birth.getDay();
}