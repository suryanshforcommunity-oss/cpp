#include <iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int> arr1, int tar){
    int st=0;
    int end = arr1.size()-1;
    while(st<=end){
        int mid= (st+end)/2;
        if(tar>arr1[mid]){
            st=mid+1;
        }
        else if(tar<arr1[mid]){
            end= mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int recBinary(vector<int> arr1, int tar,int st, int end){
    
    if(st<=end){ 
        int mid= st+(end-st)/2;
        if(tar>arr1[mid]){
            recBinary (arr1, tar, mid+1 ,  end);
        }
        else if(tar<arr1[mid]){
            recBinary(arr1, tar, st , mid -1);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    
    int n;
    cout<<"Enter total number of elements:";
    cin>>n;
    vector<int> arr1(n);
    for(int i = 0; i<n;i++){
       cout<<"Enter"<<" " <<i<<" "<<"Element"<<endl;
       cin>>arr1[i];
    }
    int tar;
    int st=0;
    int end = arr1.size()-1;
    cout<<"Enter the elment to be searched:"<<endl;
    cin>>tar;
    cout<<"The index at which the target is stored is:"<<recBinary(arr1, tar, st, end );
    return 0;
}