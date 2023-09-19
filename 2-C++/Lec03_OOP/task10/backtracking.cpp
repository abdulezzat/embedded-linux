#include "backtracking.h"

backtracking::backtracking(std::string name):fun_name(name){
    std::cout<<"Enter "<<fun_name<<std::endl;
}

backtracking::~backtracking(){
    std::cout<<"Exit "<<fun_name<<std::endl;
}