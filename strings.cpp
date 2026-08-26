#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


void stringLib(){
string str1="Suryansh"; // Dynamic in nature
cout<<str1<<" ";
str1="Sawari";
cout<<str1;
}

void stringConcatenation(){
    string str3="Suryansh";
    string str4="Sawari";
    string str5="Shelke";
   string str6= str4+str3+str5;
   cout<<str6;
}
void readString(){
char str[16];
    cout<<"Enter your string:";
    cin.getline(str,16,'.');
    for(char ch: str ){
        cout<<ch<<" ";
    }
    cout<<endl;
     cout<<str;
}

void stringReversal(){
    string palindrome;
    cout<<"Enter your string:";
    cin>>palindrome;
    string reversed = palindrome;
     reverse(reversed.begin(),reversed.end());
    if(palindrome==reversed){
        cout<<"Is palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    
}

int main(){
    stringReversal();
    return 0;
}