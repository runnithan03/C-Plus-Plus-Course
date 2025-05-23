//Example of friend function.

#include <iostream>
using namespace std;

class Square{
private:
    int side;
public:
    Square(){
        side=0;
    }
    
    friend int changeSide(Square s); //This is a friend function 
};

int changeSide(Square s){
    s.side+=20;
};

int main(){
    Square s;
    cout << "Value of my friend function is="<<changeSide(s);
}
