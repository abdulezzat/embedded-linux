#include "LOG.h"

std::vector<std::tuple<LOG::level,std::string>> LOG::buffer;

const LOG::level&  operator <<(const LOG::level & lvl,const std::string & str){
     LOG::buffer.push_back(std::tuple(lvl,str));
     return lvl;

}
void LOG::clear(){
    if(!LOG::buffer.empty())   
        LOG::buffer.clear();
}
void  LOG::print(){
    for(int i = 0 ; i < LOG::buffer.size(); i++){
        std::string msg = std::get<1>(LOG::buffer[i]);
        switch (std::get<0>(LOG::buffer[i]))
        {
        case LOG::level::WARN:
            msg = "\033[1;33m" + msg + "\033[0m";
            break;
        case LOG::level::ERROR:
            msg = "\033[1;31m" + msg + "\033[0m";
            break;
        
        default:
            break;
        }
        std::cout << msg << std::endl;
    }
}