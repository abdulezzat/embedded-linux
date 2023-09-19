#ifndef __BACK_TRACK
#define __BACK_TRACK

#include <iostream>
#include <string>

#define enter_function backtracking b(__PRETTY_FUNCTION__)

#define exit_function b.~backtracking()
                       



class backtracking {
private:
  std::string fun_name;

public:
  backtracking(std::string name);
  ~backtracking();
};

#endif