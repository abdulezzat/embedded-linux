////////////////////////////////////////////////
// find the even and odd numbers in the array //
////////////////////////////////////////////////

#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n,n_o = 0,n_e = 0,*arr,*arr_o,*arr_e;
    cout<<"Enter Array size : ";
    cin>> n;
    arr = new int[n];
    cout<<"Enter your array values : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if( arr[i] % 2 == 0)
            n_e++;
    } 
    arr_e = new int[n_e];
    arr_o = new int[n - n_e];
    n_e = 0;
    n_o = 0;
    for(int i = 0 ; i < n ; i++)
        if(arr[i]%2 == 0)
            arr_e[n_e++] = arr[i];
        else
            arr_o[n_o++] = arr[i];

    cout << "Odd values : ";
    for(int i = 0 ; i < n_o;i++)
        cout<<arr_o[i]<<' ';

    cout<<endl;
    cout << "Even values : ";
    for(int i = 0 ; i < n_e;i++)
        cout<<arr_e[i]<<' ';

    delete []arr;
    delete []arr_e;
    delete []arr_o;

    return 0;
}