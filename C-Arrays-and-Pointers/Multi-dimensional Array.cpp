//Array Display 
//Passing arrays as a parameter to the function 
#include <iostream>

void displayArray(int arr[5]);
using namespace std;
int main(){
    int a[5]={34,23,12,56,90};
    displayArray(a);
    return 0;
}

void displayArray(int arr[5]){
    int i;
    for(i=0;i<5;i++){
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    }
}

//Multi-dimensional Array 
//Example of multi-dimensional array 
#include <iostream>
using namespace std;
int main(){
    int a[3][3] ={{1,2,3},{4,7,9},{12,45,12}};
    /*
    00 01 02
    10 11 12
    20 21 22
    */
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
