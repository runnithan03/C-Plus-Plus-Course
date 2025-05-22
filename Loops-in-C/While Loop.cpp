//while loop:
/*
while(condition){
  //execute this code until condition is false or break;    
}
*/
//Program to print numbers from 1 to limit using while loop 
#include <iostream>
using namespace std;

int main() {
    int i;
    i=1;
    int limit;
    cout << "enter limit";
    cin >> limit;
    
    while(true){
        cout << i << endl;
        i++;
        if(i==limit)
        break;
    }
    return 0;
}
