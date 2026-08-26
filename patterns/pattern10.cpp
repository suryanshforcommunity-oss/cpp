#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter:";
    cin>>n;
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //number1
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        //spaces
        for(int j=0;j <=space;j++){
            cout<<" ";
        }
        //number 2
        for(int j =1;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
        space=space-2;
    }
    return 0;
}