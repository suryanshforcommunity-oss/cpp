#include <iostream>
using namespace std;
int binTodec(int binNum){
    int ans=0;
    int power =1;
    while(binNum>0){
        int rem = binNum%10;
        binNum = binNum/10;
        ans += (rem*power);
        power = power*2;
    }
    return ans;
}

int main(){

 int binNum = 101010;

    
    cout<< binTodec(binNum)<<endl;
    }
