#include <iostream>
using namespace std;
// function will return a reference to the static variable and then we will change its value
int & fun(){
    static int a = 0;
    cout<< a << endl;
    return a;
}
int main(void){
    
    fun() = 10;
    fun() = 0;

    return 0;
}