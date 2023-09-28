#include "LOG.h"

int main(){
    LOG::level(LOG::level::ERROR) << "Test Error" << "GOAL";

    LOG::level(LOG::level::WARN) << "Test WARN" << "GOAL";

    LOG::level(LOG::level::INFO) << "Test INFO" << "GOAL";

    LOG::print();

    return 0;
}