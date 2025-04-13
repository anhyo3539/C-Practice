#include <iostream>
#include <string>

using namespace std;

class Dept{
    int size;
    int* scores;
    public:
    Dept(int size);
    Dept(const Dept& dept);
    ~Dept(){delete[]scores;}
    int getSize(){return size;}
    void read();
    bool isOver60(int index);
};

Dept::Dept(int size){
    this->size=size;
    scores=new int [this->size];
}

Dept::Dept(const Dept& dept){
    size=dept.size;
    scores=new int [size];
    for(int i=0;i<size;i++){
        scores[i]=dept.scores[i];
    }
}

void Dept::read(){
    cout<<"10개의 정수 입력 >>";
    for(int i=0;i<size;i++){
        cin>>scores[i];
    }
}

bool Dept::isOver60(int index){
    return scores[index]>60?true:false;
}

int countPass(Dept a){
    int cnt=0;
    for(int i=0;i<a.getSize();i++){
     if(a.isOver60(i)){
        cnt++;
     }
    }
    return cnt;
}

int main(){
    Dept com(10);
    com.read();
    int n=countPass(com);
    cout<<"60점 이상은 "<<n<<"명";
}