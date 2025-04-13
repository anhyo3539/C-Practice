#include <iostream>
#include <string>

using namespace std;

class histogram{
    string str;
    int cnt=0;
    int *ap;
    public:
    histogram(string str);
    ~histogram(){delete[]ap;}
    void put(const string str);
    void putc(const char a);
    void print();
};

histogram::histogram(string str){
    this->str=str+"\n";
    ap=new int [26]{0};
}

void histogram::put(const string str){
    this->str+=str;
}

void histogram::putc(char a){
    str+=a;
}

void histogram::print(){
    for(int i=0;i<str.length();i++){

        if(str[i]>='A'&&str[i]<='Z'){
            cnt++;
            ap[str[i]-'A']++;
        }
        if(str[i]>='a'&&str[i]<='z'){
            cnt++;
            ap[str[i]-'a']++;
        }
    }
    cout<<str<<"\n\n\n";
    cout<<"ÃÑ ¾ËÆÄºª ¼ö>> "<<cnt<<"\n\n\n";
    for(int i=0;i<26;i++){
        cout<<(char)('a'+i)<<" ("<<ap[i]<<") : ";
        for(int j=0;j<ap[i];j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main(){
    histogram a("Wise men say, only fools rush in But I can't help, ");
    a.put("falling in love with you");
    a.putc('-');
    a.put("Elvis Presley");
    a.print();
}