// // #include <iostream>
// // using namespace std;

// // int sum (int a, int b){
// //     a=a+10;
// //     b=b+10;
// //     return a+b;
// // }

// // int main(){
// //     int a = 4, b = 5;
// //     cout<<sum(a,b)<<endl;
// //     return 0;
// // }



// //  question 1

// #include <iostream>
// using namespace std;

// int SumOfDigits(int num){
//     int digisum=0;
//     while(num>0){
//        int lastdig= num%10;
//        num=num/10;
//        digisum +=lastdig;
//     }
//     cout<<digisum<<endl;
// }

// int main(){
//     SumOfDigits(145);
//     return 0;
// }

//Question 2

#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for (int i=1 ; i <=n ; i++){
        fact*=i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
    
    return ((fact_n)/((fact_r)*(fact_nmr)));

}

int main(){
    int n =8 , r = 2;
    cout<<nCr(n,r);
    return 0;

}