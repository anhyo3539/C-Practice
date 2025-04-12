#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Random{
    int n;
    public:
    Random();
    int next();
    int nextInRange(int n1,int n2);
};

Random::Random(){
    srand(unsigned(time(0)));
}

int Random::next(){
    int num = rand();
    n = num;
    return n;
}

int Random::nextInRange(int n1,int n2){
    while(1){
        int n=rand()%n2+1;
        if(n>=n1){
            return n;
        }
    }
}

int main(){
    Random r;
    cout<<"-- 0에서 "<<RAND_MAX<<"까지의 랜덤 정수 10개 --\n";
    for(int i=0;i<10;i++){
        int n=r.next();
        cout<<n<<' ';
    }
    cout<<"\n\n-- 2에서 4까지의 랜덤 정수 10개 --\n";
    for(int i=0;i<10;i++){
        int n=r.nextInRange(2,4);
        cout<<n<<' ';
    }
}