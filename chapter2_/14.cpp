#include <iostream>
#include <string>
using namespace std;

int main(){
    string oder;
    int num;
    int money=0;
    while(1){
        cout<<"���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�\n�ֹ�>> ";
        cin>>oder>>num;
        if(oder=="����������") {
            cout<<2000*num;
            money += 2000*num;
        }
        if(oder=="�Ƹ޸�ī��") {
            cout<<2300*num;
            money+=2300*num;
           
        }
        if(oder=="īǪġ��") {
            cout<<2500*num;
            money+=2500*num;
         
        }
        cout<<"�� �Դϴ�.���ְ� �弼��\n";
        if(money>20000){
            cout<<"���� "<<money<<"���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
            break;
     }
    }
}