#include <iostream>
#include <string>
using namespace std;

int main(){
    int num=0;
    string menu[4]={"«��","¥��","������","����"};
    cout<<" ***** �·��� *****\n";
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
            cout<<"���� ������ �������ϴ�.";
            break;
        }
        else if (num>4){
            cout<<"�ٽ� �ֹ��ϼ���!!\n";
            continue;
        }
        int pn;
        cout<<"���κ�?";
        cin>>pn;
        cout<<menu[num-1]<<" "<<pn<<"�κ� ���Խ��ϴ�\n";
    }
}