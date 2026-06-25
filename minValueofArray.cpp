#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int size;
    
    double smallest = INFINITY;
    cout<<"Enter the size of array:";
    cin>>size;
     int nums[size];
     cout<<"Enter the elements of array:";
    for( int i=0; i<size; i++){
        cin>>nums[i];
    }
    for( int i=0 ; i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
    }
    for(int i=0; i<size; i++){
        cout<<nums[i]<<" ,";
    } 
    cout<<endl;
    cout<<"The smallest element is:"<<smallest;
    return 0;
}