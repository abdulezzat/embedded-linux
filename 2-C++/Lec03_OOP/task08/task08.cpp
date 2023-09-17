//////////////////
// try and / or //
//////////////////
#include <iostream>
using namespace std;

int main(){
    bool x1 ,x2;

    x1 = true;
    x2 = true;
    if (x1 and x2)
        cout<<"AND is work"<< endl;

    x1 = false;
    if(x1 or x2)
        cout<<"OR is work"<< endl;
    return 0;
}