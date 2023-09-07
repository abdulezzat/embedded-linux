//////////////////////////
// multiplication table //
//////////////////////////
#include <iostream>
using namespace std;

int main(void){
    cout << "Enter the width of the table :";
    int width;
    cin >> width;
    cout << endl;
    for(int i = 0 ; i <= width; i++){
        cout <<"| "<< i <<" | ";
        for(int j = 0 ; j <= width ;j++){
            if (j != 0)
                cout<<"  |  ";
            cout<<i<< " X " << j <<" = "<<i*j;
        }
        cout<<"  |  "<<endl;
    }
    return 0;
}