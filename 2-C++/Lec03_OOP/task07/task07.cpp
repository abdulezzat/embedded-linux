////////////////////////////////////////////////////////////
// fill array from 10 to 10000 sequentially without loops //
////////////////////////////////////////////////////////////
#include <iostream>
#include <numeric> //iota
using namespace std;

int main(){
    
    int arr[9991];
    iota(arr,arr+9991,10);
    for(int i =0;i < 9991 ; i++)
        cout<<arr[i]<<' ';
    return 0;
}