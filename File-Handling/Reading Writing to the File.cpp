//Read/ write from the file with the help of fstream 
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char text[500];
    ofstream os;
    os.open("testFile.txt");
    cout<<"writing to the file\n";
    cout<<"Please enter your info=";
    cin.getline(text,100);
    os<<text<<endl;
    os.close();
    
    ifstream is;
    string line;
    is.open("testFile.txt");
    cout<<"Reading from a text file: "<<endl;
    while(getline(is,line)){
        cout<<line<<endl;
    }
    is.close();
    return 0;
    
}
