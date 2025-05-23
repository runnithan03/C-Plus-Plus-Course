#include <iostream>
using namespace std;

class Shape{
public:
void draw(){
    cout<<"Draw Shape\n";
    }
};

class Circle: public Shape{
public:
void draw(){
    cout << "Draw circle\n";
    }
};

class Square: public Shape{
public:
void draw(){
    cout << "Draw Square";
    }
};

int main(){
    
    Shape *s;
    Shape sh;
    
    Circle c;
    Square sq;
    
    s=&sh;
    s->draw();
    
    s=&c;
    s->draw();
    
    s=&sq;
    s->draw();

}
