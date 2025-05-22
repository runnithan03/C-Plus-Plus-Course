//Arrays:
/*
int a[5]
int a[0]=10;
int a[1]=23;
int a[2]=12;
int a[3]=65;
int a[4]=90;
or 
int a[5] =[2,4,5,6,7];
*/
//Example of one dimensional array
#include <iostream>
using namespace std;
int main(){
    int a[5] = {2,3,4,6,1}; //a[0]=2, a[1]=3,...,a[4]=1
    
    int i;
    for(i=0;i<5;i++){
        cout << "a["<<i<<"]="<<a[i]<<endl; //value at a[i]
    }
    
    return 0;
}
