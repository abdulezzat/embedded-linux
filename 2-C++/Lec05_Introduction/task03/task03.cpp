///////////////////////////
// RIGHT angle triangle //
//////////////////////////
#include <iostream>
using namespace std;

int main(void){
    int hight;
    cout << "Input the hight: ";
    cin >> hight;
    cout << endl;
    for (int i = 0; i < hight; i++) 
    {
        for (int j = 0; j <i + 1; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}