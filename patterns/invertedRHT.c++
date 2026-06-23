#include <iostream>
 using namespace std;
  void print5(int n){
   for (int i = 1 ; i<= n ; i++){
    for( int j = 0 ; j < n-i+1; j++){
        cout<< "*";
    }
    cout<<endl;
   }
}
int main(){
    int t;
    cout << "enter the number of times you need to run:";
    cin >> t;
    for (int i = 0 ; i<t ; i++){
    int n;
    cout << " enter the number of elements in last line:";
    cin >> n;
    print5(n);
  }
  }