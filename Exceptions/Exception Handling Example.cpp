/*C++ Exception Handling 
*/ 

#include<iostream>
using namespace std;
int divide(int,int); //prototyping of function 

int main(){
    int a=20;
    int b=0; //raises floating point exception 
    
    int result;
    
    try{
    result = divide(a,b);
    }catch(const char* e){
        cout<<e;
        result=0;
    }
    cout<<"\nResult="<<result;
}

int divide(int x, int y){
    if(y==0){
        throw "Can not divide by 0 !";
    }
    return x/y;
}
