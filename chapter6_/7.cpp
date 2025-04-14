#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random{
    public:
    static void seed(){srand(unsigned(time(0))); }
    static int nextInt(int min=0,int max=32767);
    static char next_apb();
    static double next_double();
};

int Random::nextInt(int min,int max){
   int n=-1;
    while( n < min){
        n=rand()%(max+1);
    }
    return n;
}

char Random::next_apb(){
    int n=rand()%26;
    char c=(char)('a'+n);
    return c;
}

double Random::next_double(){
    double n=(double)(nextInt())/32767;
    return n;
}

int main(){
    Random::seed();
    cout<<"1���� 100���� ������ ���� 10���� ����մϴ�\n>> ";
    for(int i=0;i<10;i++){
        cout<<Random::nextInt(0,100)<<" ";
    }
    cout<<"\n���ĺ��� �����ϰ� 10���� ����մϴ�\n>> ";
    for(int i=0;i<10;i++){
        cout<<Random::next_apb()<<" ";
    }
    cout<<"\n������ �Ǽ��� 10���� ����մϴ�\n>> ";
    for(int i=0;i<10;i++){
        cout<<Random::next_double()<<" ";
    }
}