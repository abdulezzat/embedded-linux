///////////////////////////////////////////////////////////
// create a function to find the maximum number of array //
///////////////////////////////////////////////////////////

#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int n;
    cout<<"Enter the number : ";
    cin>> n;
    auto fun = [&n](){
        n= n*n;
    };
    fun();
    cout<<"The square value is : "<<n<<endl;
    return 0;
}