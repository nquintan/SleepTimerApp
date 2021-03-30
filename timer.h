#ifndef TIMER_H
#define TIMER_H


class timer {
private:
    double minutes = 0;
    double seconds = 0;

public:
    timer();
    void setMin(double min);
    void setSec(double sec);
    double getMin();
    double getSec();
};

#endif // TIMER_H
