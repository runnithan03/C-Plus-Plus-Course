//Overriding    

#include <iostream>
using namespace std;

class BaseClass{
public:
    void display(){
        cout<<"Base class \n";
        
    }
};

class ChildClass: public BaseClass{
public:
void display(){
    cout<<"Child Class \n";
    }
};

int main(){
    BaseClass b;
    ChildClass c;
    b.display();
    c.display();
}
