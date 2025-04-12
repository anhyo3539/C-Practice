#include <iostream>
#include <string>
using namespace std;

int main(){
    string oder;
    int num;
    int money=0;
    while(1){
        cout<<"에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다\n주문>> ";
        cin>>oder>>num;
        if(oder=="에스프레소") {
            cout<<2000*num;
            money += 2000*num;
        }
        if(oder=="아메리카노") {
            cout<<2300*num;
            money+=2300*num;
           
        }
        if(oder=="카푸치노") {
            cout<<2500*num;
            money+=2500*num;
         
        }
        cout<<"원 입니다.맛있게 드세요\n";
        if(money>20000){
            cout<<"오늘 "<<money<<"원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
            break;
     }
    }
}