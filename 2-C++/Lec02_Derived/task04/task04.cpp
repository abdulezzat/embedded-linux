///////////////////////////////
// merge two arrays together //
///////////////////////////////

#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n1,n2,*arr1,*arr2;
    cout<<"Enter frist Array size : ";
    cin>> n1;
    arr1 = new int[n1];
    cout<<"Enter your frist array values : ";
    for(int i = 0; i < n1; i++)
        cin>>arr1[i];

    cout<<"Enter second Array size : ";
    cin>> n2;
    arr2 = new int[n2];
    cout<<"Enter your second array values : ";
    for(int i = 0; i < n2; i++)
        cin>>arr2[i];

    
    int n3 = n1+n2;
    int *arr3 = new int[n3];

    for(int i = 0 ; i < n3; i++)
        if(i < n1)
            arr3[i] = arr1[i];
        else
            arr3[i] = arr2[i - n1];
    
    cout<< endl;
    for(int i = 0 ; i < n3; i++)
        cout<<arr3[i]<<' ';

    delete []arr1;
    delete []arr2;
    delete []arr3;

    return 0;
}