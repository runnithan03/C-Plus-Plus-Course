//switch statement example;
/*
switch(value){
case 1:
somecode
break;
case 2;
 .....
 default:
}
*/
#include <iostream>
using namespace std;

int main(){
    cout << "Menu \n";
    cout << "1: Addition \n";
    cout << "2: Subtraction \n";
    cout << "3: Multiplication \n";
    cout << "4: Division \n";
    
    int choice;
    cout <<"Please enter your choice";
    cin >> choice;
    
    switch (choice){
        case 1:
            cout << "You have selected Addition";
            break;
        case 2:
            cout << "You have selected Subtraction";  
            break;
        case 3:
            cout << "You have selected Multiplication";  
            break;
        case 4:
            cout << "You have selected Division";  
            break;
        default:
            cout << "Wrong choice";
    }        
    return 0;
}
