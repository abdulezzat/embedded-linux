/////////////////////////////////////////////////
// calculate accumulate of array without loops //
/////////////////////////////////////////////////
#include <iostream>
#include <numeric>
using namespace std;
int main (){
   int len, *arr;
    cout<<"Enter array size : ";
    cin>>len;
    cout<<"Enter array values : ";
    arr = new int[len];
    for(int i = 0 ; i < len ; i++)
        cin>>arr[i];
   int sum = 0;
   sum = accumulate(arr, arr+len, sum);
   cout<<"The array sum is "<<sum<<endl;
   return 0;
}

