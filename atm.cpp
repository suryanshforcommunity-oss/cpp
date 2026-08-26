#include <iostream>
using namespace std;

int main(){
    int money;
    int banknotes[]={50,20,10,5,1};
    cout<<"Enter the amount:";
    cin>>money;
    for(int i=0; i<5; i++){
        while(money>=banknotes[i]){
            cout<<banknotes[i]<<" ";
            money = money-banknotes[i];
        }
    }
    return 0;
}