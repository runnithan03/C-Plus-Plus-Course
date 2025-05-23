//Object and class
#include <iostream>
using namespace std;

class Employee {
    
public:
    int id;
    string name;
    int salary;
    
    Employee(int i, string n, int s){ //This is the constructor
        id = i;
        name = n; 
        salary = s;
    }
    
    ~Employee(){
        cout <<"\nDestructor is called by itself when the object is destroyed or program is completed";    
    }
    
    void display(){
        cout <<"id="<<id<<"\t"<<"name="<<name<<"\t"<<"salary="<<salary<<endl;
    }
    
};

int main(){
    Employee e1 = Employee(1,"Anil",12000);
    Employee e2 = Employee(2,"Thakur",10000);
    
    e1.display();
    e2.display();
}
