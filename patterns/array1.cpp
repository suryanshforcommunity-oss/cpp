#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the number of marks to be stored:";
    cin>>size;
    int marks[size];
    for(int i=0 ; i<size; i++){
        cout<<"Enter the marks:";
        cin>>marks[i];
    }
    for(int i=0; i<size; i++){
        cout<<marks[i]<<" ,";
    }
    return 0;

}