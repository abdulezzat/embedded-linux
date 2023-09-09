///////////////////////////////////////////////////////////
// create a function to find the maximum number of array //
///////////////////////////////////////////////////////////

#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int n,*arr;
    cout<<"Enter Array size : ";
    cin>> n;
    arr = new int[n];
    cout<<"Enter your array values : ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cout<<"Maximum number is "<<arr[n-1];
    delete []arr;
    return 0;
}