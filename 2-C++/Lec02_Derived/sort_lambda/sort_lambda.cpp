#include <iostream>
#include<array>
#include <algorithm>
using namespace std;
int main()
{
    array<int, 10> arr = { 1,2,3,4,5,6,7,8,9 };

    sort(begin(arr), 
         end(arr), 
         [](int a, int b) {return a > b; });

    for (auto item : arr)
      cout << item << " ";

    cout << endl;
    sort(begin(arr), 
         end(arr), 
         [](int a, int b) {return a < b; });

    for (auto item : arr)
      cout << item << " ";


    return 0;
}