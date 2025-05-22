//Object and class
#include <iostream>
using namespace std;

class Employee{
    
  public:
    int id;
    int salary;
    
};
int main(){
    
    Employee e1;
    e1.id = 100;
    e1.salary = 10000;
    cout << "e1.id="<<e1.id<<endl;
    cout <<"e1.salary="<<e1.salary<<endl;
    
    Employee e2;
    e2.id = 100;
    e2.salary = 10000;
    cout << "e2.id="<<e2.id<<endl;
    cout <<"e2.salary="<<e2.salary;
    
    
}
