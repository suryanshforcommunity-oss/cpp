// // // // // // // #include <iostream>
// // // // // // // using namespace std;
// // // // // // // int main(){
// // // // // // //     int n;
// // // // // // //     cout<<"Enter the number of lines:";
// // // // // // //     cin>>n;
// // // // // // //     int x;
// // // // // // //     cout<<"Enter the number of digits:";
// // // // // // //     cin>>x;
// // // // // // //     for (int i=1; i<=n;i++){
// // // // // // //         for(int j=1;j<=x;j++){
// // // // // // //             cout<<" " << j;
// // // // // // //         }
// // // // // // //         cout<<endl;
// // // // // // //     }
// // // // // // //     return 0 ;
// // // // // // // }

// // // // // // #include <iostream>
// // // // // // using namespace std;
// // // // // // int main(){
// // // // // //     int n;
// // // // // //     cout<<"Enter the number of lines:";
// // // // // //     cin>>n;
// // // // // //     for(int i = 0; i<n; i++){
// // // // // //         char ch = 'A';
// // // // // //         for(int j=0; j<n; j++){
// // // // // //             cout<<ch;
// // // // // //             ch=ch+1;
// // // // // //         }
// // // // // //         cout<<endl;
// // // // // //     }
// // // // // //     return 0;
// // // // // // }


// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int n;
// // // // //     cout<<"Enter the number of lines:";
// // // // //     cin>>n;
// // // // //     int num=1;
// // // // //     for (int i = 0; i<n; i++){
// // // // //         for(int j=0;j<n;j++){
// // // // //             cout<<" "<<num;
// // // // //             num=num+1;
// // // // //         }
// // // // //         cout<<endl;
// // // // //     }
// // // // //     return 0;
// // // // // }


// // // // // #include <iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int n;
// // // // //     cout<<"Enter the number of lines:";
// // // // //     cin>>n;
// // // // //     for(int i=0; i<n;i++){
// // // // //         for(int j=0; j<=i;j++){
// // // // //             cout<<"*";
// // // // //         }
// // // // //         cout<<endl;
// // // // //     }
// // // // //     return 0;
// // // // // }



// // // // // #include <iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int n =4;
// // // // //     for(int i = 0; i<n; i++){
// // // // //         for(int j =0; j<i+1; j++){
// // // // //             cout<<" "<<i+1;
        
// // // // //         }
// // // // //         cout<<endl;
// // // // //     }
// // // // //     return 0;
// // // // // }




// // // // // #include <iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int n =4;
// // // // //     for(char i = 'a'; i<n; i++){
// // // // //         for(int j =0; j<i+1; j++){
// // // // //             cout<<" "<<i+1;
        
// // // // //         }
// // // // //         cout<<endl;
// // // // //     }
// // // // //     return 0;
// // // // // }


// // // // // #include <iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int n ;
// // // // //     cout<<"Enter number of lines:";
// // // // //     cin>>n;
// // // // //     for (int i = 0; i<n; i++){
// // // // //         for(int j=1;j<=i+1;j++){
// // // // //             cout<<j<<" ";
// // // // //         }
// // // // //         cout<<endl;
// // // // //     }
// // // // //     return 0;
// // // // // }



// // // // #include <iostream>
// // // #// using namespace std;
// // // // int main(){
// // // //     int n;
// // // //     cout<<"Enter the number of lines:";
// // // //     cin>>n;
// // // //     for(int i=0; i<n; i++){
// // // //         for(int j=i+1; j>0; j--){
// // // //             cout<<j<<" ";
// // // //         }
// // // //         cout<<endl;
// // // //     }
// // // //     return 0;
// // // // }


// // // include <iostream>
// // // using namespace std;
// // // int main(){
// // //     int n;
// // //     cout<<"Enter the number of lines:";
// // //     cin>>n;
// // //     int num = 1;
// // //     for(int i =0; i<n; i++){
// // //         for(int j = 0; j<i+1; j++){
// // //         cout<<num<<" ";
// // //         num++;
// // //         }
// // //         cout<<endl;
// // //     }
// // //     return 0;
// // // }


// // // #include <iostream>
// // //  using namespace std;
// // //  int main(){
// // //      int n;
// // //      cout<<"Enter the number of lines:";
// // //      cin>>n;
// // //      int num = 1;
// // //      for(int i =0; i<n; i++){
// // //         for(int j = i+1; j>0; j--){
// // //         cout<<num<<" ";
// // //         num++;
// // //          }
// // //         cout<<endl;
// // //      }
// // //      return 0 ;
// // //     }



// // // inverted triangle pattern

// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int n ;
// //     cout<<"Enter number of lines:";
// //     cin>>n;
// //     for (int i =0; i<n;i++){
// //         for (int j=0;j<i;j++){
// //             cout<<" ";
// //         }
    
// //         for(int j=1; j<=n-i; j++){
// //             cout<<n-i;
            
// //         }
// //            cout<<endl;
// //     }
// //     return 0;
// // }




// //PYRAMID PATTERN

// #include <iostream> 
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter the number of lines:";
//     cin>>n;
//     for(int i=0; i<n ; i++){
//         for(int j = n-i-1; j>=1; j--){
//         cout<<" ";   
//         }
//         for(int j=1; j<=i+1; j++){
//             cout<<j;
//         }
//         for(int j=i; j>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }



#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines:";
    cin>>n;
    for( int i =0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";

     if(i!=0){
        for(int j = 1; j <= (2*i)-1; j++){
            cout<<" ";
        }
        cout<<"*";
     }
     cout<<endl;
    }
for (int i =0; i<n-1;i++){
    for(int j=0;j<i+1;j++){
        cout<<" ";
    }
    cout<<"*";
    if(i!=n-2){
        for(int j = 1; j <= (2*(n-2-i))-1; j++){
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;

}
return 0;
}
  