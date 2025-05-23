//This pointer (this ->) and static fields 
#include <iostream>
using namespace std;

class Employee {
    
public:
    int id;
    string name;
    int salary;
    static string company;
    
    Employee(int i, string n, int s){ //This is the constructor
        this-> id = i;
        this-> name = n; 
        this-> salary = s;
    }
    void display(){
        cout <<"id="<<id<<"\t"<<"name="<<name<<"\t"<<"salary="<<salary<<"\t company="<<company<<endl;
    }
    
};

string Employee::company="XYZ";
int main(){
    Employee e1 = Employee(1,"Anil",12000);
    Employee e2 = Employee(2,"Thakur",10000);
    Employee e3 = Employee(3,"abc",1000);
    Employee e4 = Employee(4,"pqr",100);
    
    e1.display();
    e2.display();
    e3.display();
    e4.display();
}
