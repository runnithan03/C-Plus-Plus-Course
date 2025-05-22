//local and global variables using c++

#include <iostream>

using namespace std;
int b = 20; //This is a global variable
void display();

int main(){
    int a=10;// This is a local variable 
    cout<<"local variable a="<<a<<endl;
    
    cout <<"Global variable in main b="<<b<<endl;
    display();
    return 0;
}
void display(){
    cout << "b=" << b;
    
}
