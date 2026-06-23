#include <iostream>
 using namespace std;
  void print3(int n){
   for (int i = 0; i<= n; i++){
    for( int j = 1; j <= i; j++){
        cout<< j << " ";
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
    print3(n);
  }
  }