//Conditional Operator: Find the larger number using conditional operator 
//Relation Operator (> or <)
#include <iostream>
using namespace std;

int main(){
    int a,b;
    int c;
    cout<<"Enter first number=";
    cin >>a;
    cout<<"Enter 2nd number=";
    cin>>b;
    
    c=(a>b)?a:b; //(b>a)?b:a; or (a<b)?b:a or (b<a)?a:b;
    cout<<"Greater number is="<<c;
    
    return 0;
}
