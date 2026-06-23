#include <iostream>
using namespace std;
int main(){
    int year,month,day, ans, month_no;
    cout<<"Enter the year:";
    cin>>year;
    cout<<"Enter the month:";
    cin>>month;
    cout<<"Enter the day:";
    cin>>day;
    month_no = month - 2;
    if(month_no<=0){
        month_no = month_no + 12;
        year = year - 1;
    }
    else {
        month_no = month_no;
    }
    month_no = (month_no*83)/32;
    month_no = month_no + day;
    month_no = month_no + year;
     month_no = month_no + (year/4);
     month_no = month_no - (year/100);
     month_no = month_no + (year/400);
     ans = month_no%7;
     cout<<ans;
     
     return 0;
}