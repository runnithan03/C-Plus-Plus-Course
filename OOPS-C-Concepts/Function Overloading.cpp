//Overloading:
/*
Functional overloading
*/

#include <iostream> 
using namespace std;

class Operation{
    public:
        int add(int a, int b){
            cout << "Executing method add(int a, int b)\n";
            return a+b;
        }
        int add(int a, int b,int c){
            cout << "\nExecuting method add(int a, int b, int c)\n";
            return a+b+c;
        }
        int add(int a, int b, string s){
            cout << "\nExecuting method add(int a, int b, string s)\n";
            cout << s << endl;
            return a+b;
        }
};
int main(){
    Operation o;
    cout <<o.add(5,6);
    cout << o.add(1,2,3);
    cout << o.add(5,6,"Raul");
}
