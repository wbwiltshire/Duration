//Hello World
#include "duration.h" 
#include <signal.h>
#include <unistd.h>
#include <pthread.h>

//bool sigint_flag = false;

static void sigint_handler(int arg) {
    Duration::stop();
    cout << "caught SIGINT" << endl;
};

bool Duration::done = false;

int main(int argc, char** argv)
{
  Duration d;
  
  signal(SIGINT, sigint_handler);

  d.version();
  d.process();
  cout << "\nPress any key to continue..";
  cout.put('\n');
  cin.get();

 return 0;
}
