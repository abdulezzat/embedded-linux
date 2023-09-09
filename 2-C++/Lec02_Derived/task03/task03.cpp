////////////////////////////
// delete number in array //
////////////////////////////

#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n,s;
    cout<<"Enter Array size : ";
    cin>> n;
     vector<int> arr(n);
    cout<<"Enter your array values : ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<"Enter the value you want to delete : ";
    cin>>s;
    int found = -1;
    for(int i = 0 ; i < n && found == -1; i++)
        if(arr[i] == s)
            found = i;

    if (found != -1){
        arr.erase(arr.begin() + found);
        cout<<"Deleted"<<endl<<"The new array is : \n";
        for(int i = 0 ; i < arr.size(); i++)
            cout<<arr[i]<<' ';
    }
    else{
        cout<<"Value is not Exist";
    }


    return 0;
}