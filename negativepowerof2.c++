#include <iostream>
using namespace std;

int main(){
    int num;
    long value=1;
    double req_value=1;
    cout<<"Enter the negative power to be calculated:";
    cin>>num;
    for(int i = 1; i<=num; i++){
        value = 2*value;
        req_value = 1.0/value;
    }
    cout<<req_value;
    return 0;
}