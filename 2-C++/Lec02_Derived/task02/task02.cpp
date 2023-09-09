////////////////////////////////////////////////////////////////////////////////////////////
// create a function to search to the number in the array which number is taken from user //
////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(void){
    int n,*arr,s;
    cout<<"Enter Array size : ";
    cin>> n;
    arr = new int[n];
    cout<<"Enter your array values : ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<"Enter the value you want : ";
    cin>>s;
    bool found = false;
    for(int i = 0 ; i < n && !found; i++)
        if(arr[i] == s)
            found = true;

    if (found)
        cout<<"Exists";
    else
        cout<<"Not Exists";

    delete []arr;
    return 0;
}