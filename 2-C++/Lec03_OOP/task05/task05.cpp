///////////////////////////////////////////
// handle interrupt signal like (ctrl+c) //
///////////////////////////////////////////
#include <unistd.h>
#include <iostream>
#include <cstdlib>
#include <signal.h>
using namespace std;
// Define the function to be called when ctrl-c (SIGINT) is sent to process
void signal_callback_handler(int signum) {
   cout << "Caught signal " << signum << endl;

   //if we want to add any function it will be here 
   // Terminate program
   exit(signum);
}
int main(){
   // Register signal and signal handler
   signal(SIGINT, signal_callback_handler);
   while(true){
      cout << "Program processing..." << endl;
      sleep(1);
   }
   return EXIT_SUCCESS;
}