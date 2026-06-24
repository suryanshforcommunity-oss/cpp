#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number to find the factorial:";
    cin>>num;
    int fact = 1 ;
    for(int i ; i<=num ; i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}