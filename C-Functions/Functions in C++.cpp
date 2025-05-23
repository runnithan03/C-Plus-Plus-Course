/* function:

return_type functionName(parameters...){
    
}

prototyping of function 
definition of function 
function call 
*
*/
#include <iostream>
using namespace std;
int add(int,int); //prototyping of add function 
int main(){
    int n1 = 10;
    int n2 = 20;
    int result;
    result = add(n1,n2); // function call 
    cout << "Addition of n1 and n2=" << result;
    
    return 0;
}

int add(int a, int b){ //definition of a function
    int sum;
    sum = a+b;
    return sum;
}
