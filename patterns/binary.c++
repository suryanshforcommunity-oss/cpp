#include <iostream>
using namespace std;
int decTobinary(int decNum){
    
    int power=1;
    int ans = 0;
    while(decNum>0){
        int rem = decNum%2;
        decNum = decNum/2;
        ans += (power*rem);
        power = power*10;
    }

return ans;
}

int main(){
     int decNum = 50;
     for(int i=1; i<=10; i++){
        cout<<decTobinary(i)<<endl;
     }
}