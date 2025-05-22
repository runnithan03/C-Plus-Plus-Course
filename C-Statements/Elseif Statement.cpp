//else if statements: 
/*
if(condition1) {
    execute this code when condition1 is true...
}elseif(condition2){
    execute this code when condition2 is true...
}elseif(condition3){
    execute this code when condition3 is true...
...
else{
    
}

*/
#include <iostream>
using namespace std;

int main(){
    
    int marks;
    cout <<"Please enter your marks:";
    cin >> marks;
    
    if (marks >= 90){
        cout<<"A Grade";
    }else if (marks > 80 && marks < 90) {
        cout <<"B Grade";
    }else if (marks>=60 && marks <= 80){
        cout << "C Grade";
    }else if(marks >= 40 && marks < 60){
        cout << "D Grade";
    }else{
        cout << "F Grade";
    }
    return 0;
}
