#include <iostream>
 using namespace std;
 void print1(int n){
    for (int i = 0; i<n ; i++){
        for (int j =0 ; j<n; j ++){
            cout<<"* ";
        }
        cout << endl ;
    }
 }
  int main(){
    int t;
    cout << "enter the number of times you need to run";
    cin >> t;
    for (int i = 0 ; i<t ; i++){
    int n;
    cout << " enter the side of square ( 1 star = 1 unit):";
    cin >> n;
    print1(n);
  }
  }