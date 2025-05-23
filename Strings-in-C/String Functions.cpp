/*string functions:
strcpy(s1,s2): Copies string s2 into string s1
strcat(s1,s2): Concatenates string s2 onto the end of string s1
strlen(s1): Returns the length of string s1
strcmp(s1,s2): Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2
strchr(s1,ch): Returns a pointer to the first occurence of character ch in string s1.
strstr(s1,s2): Returns a pointer to the first occurence of string s2 in s1.
*/

#include <iostream>
#include<string>
#include<cstring> //need these for string functions! 

using namespace std;

int main() {
    char s1[]="string1";
    char s2[]="string";
    
    if(strcmp(s1,s2)==0){
        cout<<"s1 and s2 are equal";
    }else if (strcmp(s1,s2)>0){
        cout<<"s1 is greater than s2";
    }
    else{
        cout<<"Not equal";
    }
}

//now using strchr...
int main() {
    char s1[]="string1";
    char s2[]="string";
    cout<<strchr(s1,'r');
    
}
