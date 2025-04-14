#include <iostream>
#include <string>

using namespace std;

class ArrayUtility{
    public:
    static void intTodouble(int a[],double b[],int size);
    static void doubleTOint(double a[],int b[],int size);
};

void ArrayUtility::intTodouble(int a[],double b[],int size){
        for(int i=0;i<size;i++){
            b[i]=(double)a[i];
        }
}

void ArrayUtility::doubleTOint(double a[],int b[],int size){
    for(int i=0;i<size;i++){
        b[i]=(int)a[i];
    }
}

int main(){
    int x[]={1,2,3,4,5};
    double y[5];
    double z[]={9.9,8.8,7.7,6.6,5.5};
    
    ArrayUtility::intTodouble(x,y,5);
    for(int i=0;i<5;i++){cout<<y[i]<<" ";}
    cout<<"\n";

    ArrayUtility::doubleTOint(z,x,5);
    for(int i=0;i<5;i++){cout<<x[i]<<" ";  }
}