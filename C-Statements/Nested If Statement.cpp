//nested if statement example;
/*
if(condition1) {
    if(condition2) {
        some code here 
    }
}else{
    
}
*/
#include <iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cout << "Please enter 1st no.=";
    cin >> a;
    cout << "Please enter 2nd no=";
    cin >> b;
    cout << "Please enter 3rd no=";
    cin >> c;
    
    if (a>b){
        if (a>c){
            cout << a;
        }else{
            cout << c;
        }
    }else{
            cout << b;
        }
    
}
