//Hello World
#include "duration.h" 

Duration::Duration() {
  cout << "Duration ctor." << endl;
}

void Duration::version()
{
  cout << "version: 0.9" << endl;
}

void Duration::process() {
  int cnt = 0;
  time_t start = std::time(NULL);
  cout << "start time: " << std::asctime(std::localtime(&start)) << endl;
  cout << "I will process for 60 seconds or until interrupted." << endl;
  time_t end = start + 60;
  cout << "end time: " << std::asctime(std::localtime(&end)) << endl;
  while (true)
  {
     cout << "processing(" << cnt++ << ")..." << endl;
     sleep(1);
     if (std::time(NULL) > end) {
         cout << "Ended due to duration." << endl;
         break;
     }
     if (done) {
        cout << "Ended due to user interrupt" << endl;
        break;
     }
  }

}

void Duration::stop() {
  done = true;
}

Duration::~Duration()
{
  cout << "Duration destructor." << endl;
}


