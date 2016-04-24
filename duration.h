#include <iostream>
#include <ctime>
#include <string>
#include <unistd.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::time_t;

class Duration {
    //Global Variables
   private: 
   public: 
     static bool done;
     Duration();
     ~Duration();
     void version();
     void process();
     static void stop();
};

