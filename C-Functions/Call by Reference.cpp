//call by reference

#include <iostream>
using namespace std;

void swap(int*, int*);

int main(){
    
    int a=15;
    int b=55;
    cout << "Values of a and b before swap fctn or call by reference \n";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    
    swap(&a,&b); //&a: memory address of a and &b means memory address of b 
    
    cout << "Values of a and b after swap fctn or call by reference \n";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    
    return 0;
    
}

void swap(int *a, int*b){ // *a
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
