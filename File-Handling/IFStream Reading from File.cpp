//Read from file with the help of ifstream 
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string str;
    ifstream filestream("testfile.txt");
    
    if(filestream.is_open()){
        while(getline(filestream,str)){
            cout<<str<<endl;
        }
        filestream.close();
    }else{
        cout<<"Can not open the file";
    }
}
