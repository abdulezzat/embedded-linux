/////////////////////////////////////////////////////
// summation the digits of integer entered by user //
/////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main(void){
   int num,sum=0;
   cout << "Please enter the number : ";
   cin >> num;
    while(num){
        sum+=num%10;
        num=num/10;
    }
    cout<< "The summation result is : "<<sum;
    return 0;
}