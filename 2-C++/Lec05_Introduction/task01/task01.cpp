///////////////////////////////////
// Create a table for AscII code //
///////////////////////////////////
#include <iostream>
#include <iomanip>
using namespace std;

char const* character[] = {"", "", "", "", "", "", "", "",
                            "\\a","\\b","\\t","\\n","\\v","\\f","\\r", "",
                            "", "", "", "", "", "", "", "",
                            "", "", "", "", "", "", "", ""};

int main(void){
    cout<<"+--------+-------+"<<endl;
    cout<<"|  char  | ASCII |"<<endl;
    cout<<"+--------+-------+"<<endl;
    for(int i = 0 ; i < 128 ; i ++)
        if(i<=32)
            cout<<"|  "<<setfill(' ') << setw(3)<<character[i]<<"   |  "<<setfill(' ') << setw(3)<<i<<"  |"<<endl;
        else if (i < 127)
            cout<<"|  "<<setfill(' ') << setw(3)<<char(i)<<"   |  "<<setfill(' ') << setw(3)<<i<<"  |"<<endl;
        else
            cout<<"|  "<<setfill(' ') << setw(3)<<"DEL"<<"   |  "<<setfill(' ') << setw(3)<<i<<"  |"<<endl;

    cout<<"+--------+-------+"<<endl;
    return 0;
}