#ifndef _LOG_H
#define _LOG_H
#include<iostream>
#include <stdlib.h>
#include<string>
#include<vector>
#include<tuple>



class LOG{
public:
    enum class level{
    INFO,
    WARN,
    ERROR
};

    LOG() = delete;
    friend const level& operator <<(const level & lvl,const std::string & str);
    static void clear();
    static void print();

private:
    static std::vector<std::tuple<level,std::string>> buffer;
};
    






#endif