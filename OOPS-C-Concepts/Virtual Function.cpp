//Virtual Functions:

#include <iostream> 
using namespace std;

class A{
public:
    virtual void display(){ //virtual function 
        cout<<"Display method of base class\n";
    }
};

class B: public A{
public:
    void display(){
        cout<<"display method of sub class";
    }
};

int main(){
    A *a;
    B b;
    a=&b;
    a->display(); //late binding 
}
