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
    cout<<"1에서 100까지 랜덤한 정수 10개를 출력합니다\n>> ";
    for(int i=0;i<10;i++){
        cout<<Random::nextInt(0,100)<<" ";
    }
    cout<<"\n알파벳을 랜덤하게 10개를 출력합니다\n>> ";
    for(int i=0;i<10;i++){
        cout<<Random::next_apb()<<" ";
    }
    cout<<"\n램덤한 실수를 10개를 출력합니다\n>> ";
    for(int i=0;i<10;i++){
        cout<<Random::next_double()<<" ";
    }
}