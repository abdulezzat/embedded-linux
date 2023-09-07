/////////////////////////////////////////
// maximum number between three values //
/////////////////////////////////////////
#include <iostream>
using namespace std;

int main(void){
    int a=0,b=0,c=0;
    cout<< "Enter three numbers separeted by space : ";
    cin >> a >> b >> c ;
    int max = (a>b)? ((a>c)? a:c):((b>c)? b:c);
    cout<<"Maximum number is "<<max<<endl;
    return 0;
}