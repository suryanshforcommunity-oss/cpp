#include <iostream>
 using namespace std;
  void print2(int n){
   for (int i = 0; i< n; i++){
    for( int j = 0; j<=i ; j++){
        cout<< "* ";
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
    cout << " enter the number of stars in last line:";
    cin >> n;
    print2(n);
  }
  }