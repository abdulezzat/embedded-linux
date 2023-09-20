//////////////////////////////////////////////////
// check if there is any value of array is even //
//////////////////////////////////////////////////

#include <iostream>
using namespace std;
#include "String,h"

int main(void) {
  String s;
  String s1("ahmed");
  String s2(4, "ali");
  String s3(std::move(s2));
  String s4(s1);

  cin >> s;
  
  cout << s.size() << ": " << s << endl;
  cout << s1.size() << ": " << s1 << endl;
  cout << s2.size() << ": " << s2 << endl;
  cout << s1.str_cmp(s2);

  s = "test +";
  s = s + s1;
  cout << s.size() << ": " << s << endl;

  s = s + " op+";
  cout << s.size() << ": " << s << endl;
  
  s = s1;

  cout << s.size() << ": " << s << endl;
  cout << s1.size() << ": " << s1 << endl;

  s1 = std::move(s2);

  cout << s1.size() << ": " << s1 << endl;
  cout << s2.size() << ": " << s2 << endl;

  return 0;
}