#include <iostream>
using namespace std;
int main(){
    int year , a , b , c, d , e , value;
    cout<<"Enter the year:";
    cin>> year;
    a = year%19;
    b = year%4;
    c = year%7;
    d = ((a*19)+24)/30 ;
    e = (2*b + 4*c + 6*d + 5)/7;
    value = d + e;
    if (value<10){
        cout<<"Easter is on March "<<(d+e+22);
    }
    else{
        cout<<"Easter is on April "<<(d+e-9);
    }
    
    return 0;
}