/////////////////////////////////////
// check if the character is digit //
/////////////////////////////////////

#include <iostream>
using namespace std;

int main(void){
    char cr;
    cout<<"Enter your character : ";
    cin>>cr;
    ((cr - '0')>= 0 && (cr - '0') <= 9)? cout<<"Yes"<<endl:cout<<"No"<<endl;
    return 0;
}