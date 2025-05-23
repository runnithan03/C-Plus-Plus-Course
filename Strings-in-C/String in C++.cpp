//String Introduction 
/*string
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    
    string s1;
    cout <<"Please enter any info: ";
    getline(cin,s1);
    
    cout<<s1<<endl;
    cout<<"length of string is="<<s1.length()<<endl;
    return 0;
}

//Finding the character we desire 
#include<iostream>
#include<string>

using namespace std;

int main(){
    
    string s1 = "Raul Unnithan";
    cout<<s1.at(5);
    return 0;
}

//Typing out full name using individual characters 
#include<iostream>
#include<string>

using namespace std;

int main(){
    
    string s1 = "Raul Unnithan";
    for(int i=0;i<s1.length();i++){
        cout<<s1.at(i);
    }
    return 0;
}
