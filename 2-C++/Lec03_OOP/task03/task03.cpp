//////////////////////////////////////////////////
// check if there is any value of array is even //
//////////////////////////////////////////////////

#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int len, *arr;
    cout<<"Enter array size : ";
    cin>>len;
    cout<<"Enter array values : ";
    arr = new int[len];
    for(int i = 0 ; i < len ; i++)
        cin>>arr[i];

    all_of(arr, arr + len, [](int i) {return (i % 2 != 0); })? cout << "No even elements are exists "<<endl: cout << "array has even element" <<endl;
    return 0;
}