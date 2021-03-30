#include "timer.h"
#include "iostream"

using namespace  std;

timer::timer() {

}

void timer::setMin(double min) {
    this->minutes = min;
}

void timer::setSec(double sec) {
    this->seconds = sec;
}

double timer::getMin() {
    return minutes;
}

double timer::getSec() {
    return seconds;
}
