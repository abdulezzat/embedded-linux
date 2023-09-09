///////////////////////////////////////
// decide the letter is vowel or not //
///////////////////////////////////////
#include <iostream>
using namespace std;

int main(void){
    char a;
    cout<<"Enter a character : ";
    cin >> a;
    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "YES"<<endl;
        break;
    
    default:
        cout<<"NO"<<endl;
        break;
    }
    return 0;
}