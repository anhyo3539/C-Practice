#include <iostream>
#include <string>

using namespace std;

class ArrayUtility{
    public:
    static int* concat(int s1[],int s2[],int size);
    static int* remove(int s1[],int s2[],int size,int &ref);
};



int* ArrayUtility::concat(int s1[],int s2[],int size){
    int *p;
    p=new int[size*2];
    for(int i=0;i<size;i++){
        p[i]=s1[i];
    }
    for(int i=0;i<size;i++){
        p[i+size]=s2[i];
    }
    return p;
}

int* ArrayUtility::remove(int s1[],int s2[],int size,int &ref){
    int *p;
    ref=size;
    int d=1;
    int *n=new int [size];
    int top=0;
    int f=1;
    for(int i=0;i<size;i++){
        f=1;
       for(int j=0;j<size;j++){
        if(s1[i]==s2[j]){
            ref--;
            f=0;
        }
       }
       if(f){
        n[top]=s1[i];
        top++;
       }
    } 
    p=new int [ref];
    int num=0;
    for(int i=0;i<top;i++){
            p[num]=n[i];
            num++;
    }
    return p;
}

int main(){
    int x[5]; int y[5];
    cout<<"정수를 5개 입력하라. 배열 x에 삽입한다>>";
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    cout<<"정수를 5개 입력하라. 배열 y에 삽입한다>>";
    for(int i=0;i<5;i++){
        cin>>y[i];
    }
    cout<<"합친 정수 배열을 출력한다\n";
    for(int i=0;i<10;i++){
        cout<<ArrayUtility::concat(x,y,5)[i]<<" ";
    }
    cout<<"\n";
    int n=0;
    int *p;
    p=ArrayUtility::remove(x,y,5,n);
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}