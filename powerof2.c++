#include <iostream>
using namespace std;
int main(){
    int num;
    long value=1;
    cout<<"Enter the power of 2 to be calculated:";
    cin>> num;
    for(int i=1; i<= num; i++){
      value = 2*value;
    }
    cout<<value;
    return 0;
}