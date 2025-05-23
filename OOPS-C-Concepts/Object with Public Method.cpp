//Object and class
#include <iostream>
using namespace std;

class Employee {
    
public:
    int id;
    string name;
    int salary;
    
    void insert(int i, string n, int s){
    
        id = i;
        name = n;
        salary = s;
    }
    void display(){
        cout <<"id="<<id<<"\t"<<"name="<<name<<"\t"<<"salary="<<salary<<endl;
    }
    
};

int main(){
    Employee e1;
    e1.insert(100,"Anil",12000);
    e1.display();
    
    Employee e2;
    e2.insert(200,"Thakur",10000);
    e2.display();
}
