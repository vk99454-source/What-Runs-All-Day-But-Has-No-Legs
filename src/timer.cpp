#include "timer.hpp"

Timer::Timer() {
running = false;
    elapsedSeconds = 0;
}
void Timer::start() {
startTime = chrono::system_clock::now();
    running = true;
}
void Timer::stop() {
stopTime = chrono::system_clock::now();
    elapsedSeconds = chrono::duration_cast<chrono::seconds>(stopTime - startTime).count();
    running = false;
}
int Timer::elapsed() const {
return elapsedSeconds;
}