#include <iostream>
using namespace std;
 int i=0;
void printName(int n,int i){
    if(i>n) 
    return ;
    cout<<"Suryansh";
    printName(i,n);
}
int main(){
    int i;
    int n;
    cout<<"Enter";
    cin>>n;
    printName(n,i);
    return 0;
}