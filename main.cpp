#include <iostream>
#include <thread>
#include <chrono>
#include "src/timer.hpp"
using namespace std;

int main() {
  Timer timer;
  cout << "Elapsed time before start(): " << timer.elapsed() << " seconds" << endl;
  cout << "Starting timer..." << endl;
  timer.start();
  this_thread::sleep_for(chrono::seconds(5));
  cout << "Stopping timer..." << endl;
  timer.stop();
  cout << "Elapsed time after stop(): " << timer.elapsed() << " seconds" << endl;
  return 0;
}
