/*
To read and write form a file we use the standard C++ library fstream.
Let us see the data types define in fstream library is:

Data Type      Description 
fstream        It is used to create files, write informaiton to files, and read information from files.
ifstreeam      It is used to read information from files.
ofstream       It is used to create files and write information to the files. 

ofstream filestream("testout.txt");

ifstream filestream("testout.txt")

*/
//Writing to the file with the help of fstream 
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream filestream("testFile.txt");
    if(filestream.is_open()){
        cout<<"File is open, we can write to the file";
        filestream<<"Welcome to C++ tutorials";
        filestream<<"\nThis is the example of ofstream!"
        filestream.close();
    }else{
        cout<<"File can not be open";
    }
}
