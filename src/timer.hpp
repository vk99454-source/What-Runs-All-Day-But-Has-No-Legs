#include <chrono>
using namespace std;

class Timer {
public:
    Timer();
    void start();
    void stop();
    int elapsed() const;

private:
    bool running;
    int elapsedSeconds;
    chrono::time_point<chrono::system_clock> startTime;
    chrono::time_point<chrono::system_clock> stopTime;
};