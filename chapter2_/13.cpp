#include <iostream>
#include <string>
using namespace std;

int main(){
    int num=0;
    string menu[4]={"짬뽕","짜장","군만두","종료"};
    cout<<" ***** 승려장 *****\n";
    while(1){
     for(int i=0;i<4;i++){
         cout<<menu[i]<<" : "<<i+1;
            if(i!=3){
                cout<<", ";
            }
     }
        cout<<">>";
        cin>>num;
        if(num==4){
            cout<<"오늘 영업은 끝났습니다.";
            break;
        }
        else if (num>4){
            cout<<"다시 주문하세요!!\n";
            continue;
        }
        int pn;
        cout<<"몇인분?";
        cin>>pn;
        cout<<menu[num-1]<<" "<<pn<<"인분 나왔습니다\n";
    }
}