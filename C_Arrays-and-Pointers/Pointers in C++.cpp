//Pointers: variables which can store the memory address of another similar type of variable
// int *p; 
//int a=10
#include <iostream>
using namespace std;
int main(){
    int *p; //p is a pointer 
    int a=10;
    p = &a; //address of a will be stored in p pointer
    *p = 20; //we have changed the value at address p or address of variable a
    
    cout<<"now value of a="<<a;
    
    return 0;
}
