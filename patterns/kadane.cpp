#include <iostream>
#include<limits>
using namespace std;
int main(){
    int arr[6]={-2,-5,7,-9,3,1};
    int maxSum=0;
    int currSum=0;
    int n = 6;
    for(int i=0; i<n;i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum;
    return 0;
}