//Example of Inheritance in C++

#include <iostream>
using namespace std;

class Account{
    public:
    int salary = 12000;
};

class Employee: public Account{
public:
    string name = "Anil";
    int bonus = 1000;
};

int main(){
    
    Employee e;
    cout << "name="<<e.name<<endl;
    cout << "salary="<<e.salary<<endl;
    cout << "bonus=" << e.bonus << endl;
}
