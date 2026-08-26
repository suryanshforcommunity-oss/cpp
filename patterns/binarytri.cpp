#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter: ";
cin>>n;
int first=1;
for(int i=0; i<n;i++){
    if(i%2==0){
        first=1;
    }
    else{
        first=0;
    }
    for(int j=0;j<=i;j++){
        cout<<first;
        first=1-first;
    }
    
    cout<<endl;
}
return 0;
}