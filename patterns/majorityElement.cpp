#include<iostream>
using namespace std;
int arr[]={1,2,2,3,4,1,2,2,2,2};
int n = 10;
void majorityElement(){
    for(int i =0 ; i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if (count>(n/2)){
            cout<<"Majority element is:"<<arr[i]<<endl;
            return;
        }
    }
}


int main(){
    majorityElement();
    return 0;
}