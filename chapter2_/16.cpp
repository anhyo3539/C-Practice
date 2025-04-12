#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    char str[10000];
    int cnt=0;
    int apt[26]={0,};
    cin.getline(str,10000,';');
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a'&& str[i]<='z'){
            apt[str[i]-'a']++;
            cnt++;
        }
        if(str[i]>='A'&&str[i]<='Z'){
            apt[str[i]-'A']++;
            cnt++;
        }
    }
    cout<<"ÃÑ ¾ËÆÄºª ¼ö "<< cnt<<"\n";
    for(int i=0;i<26;i++){
        cout<<(char)('a'+i)<<" ("<<apt[i]<<") "<<" : ";
        for(int j=0;j<apt[i];j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}