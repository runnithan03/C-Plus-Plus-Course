//recursion: a function which calls itself
/*
recursionFunction(){
    recursionFUnction();
}
*
*factorial of 3: 3*2*1 = 6
*factorial of 5: 5*4*3*2*1 = 120
*/
// write a program to find the factorial using recursions 
#include <iostream>
using namespace std;
int fact(int);
int main(){
    int a = 5;
    int result = fact(a);
    cout << "factorial of" <<a<< "="<<result;
    return 0;
    
}

int fact(int a){//recursive function
    if(a==0){
        return 1;
    }
    return a*fact(a-1);
}
