//Abstraction: data abstraction 

#include <iostream>
using namespace std;

class Test{
private:
    int a,b,sum;

public:
    void add(){
        cout<<"Please enter your 1st number=";
        cin>>a;
        cout<<"Please enter your 2nd number=";
        cin>>b;
        sum=a+b;
        cout<<"\nSum="<<sum;
    }
};

int main(){
    Test t;
    //t.a=10;
    //cout<<t.a; #cannot access because the class is private 
    //now for public:
    t.add();
}
