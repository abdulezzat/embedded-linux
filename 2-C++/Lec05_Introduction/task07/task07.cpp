//////////////////////////////////////////////////
// change from decimal to binary and vice versa //
//////////////////////////////////////////////////
#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main(void){
   int num_d;
   cout << "Enter a decimal number : ";
   cin >> num_d;
   bitset<8> bits(num_d);
   cout<<"The binary representation of "<< num_d << " is "<< bits<<endl;

   string num_b;
   cout << "Enter a binary number : ";
   cin >> num_b;
   bitset<8> decimal(num_b);
   cout<<"The decimal representation of "<< num_b << " is "<< decimal.to_ulong() <<endl;

    return 0;
}