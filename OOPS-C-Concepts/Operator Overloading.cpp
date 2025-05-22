//Overloading:
/*
Operator Overloading:
* ++ operator 
*/

#include <iostream> 
using namespace std;

class ChangeOperator{
    
public:
    int num;
    ChangeOperator(int num){
        this->num=num;
    }
    
    int operator ++(){
        return num=num+3;
    }
    
    void printNumber(){
        cout<<"Number="<<num;
    }
};

int main(){
    
    ChangeOperator o=ChangeOperator(4);
    ++o;
    o.printNumber();
}
