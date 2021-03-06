#ifndef __TIME_H
#define __TIME_H
#include <iostream>
using namespace std;
void enterTime();
bool isValidTime(size_t, size_t, size_t);
class Time
{
private:
    size_t mHours;
    size_t mMins;
    size_t mSecs;
    size_t mTimeInSecs;
    void turnToSec();
    void convertToNormal();

public:
    Time();
    Time(size_t, size_t, size_t);
    Time &operator=(const Time &);
    void setHours(int);
    void setMin(int);
    void setSeconds(int);
    size_t getHours() const;
    size_t getMins() const;
    size_t getSeconds() const;
    size_t getTimeInSecs() const;
    bool operator>(const Time &) const;
    bool operator==(const Time &) const;
    bool operator>=(const Time &) const;
    friend Time operator-(const Time &, const Time &);
    friend std::ostream &operator<<(std::ostream &, const Time &);
    friend std::istream &operator>>(std::istream &, Time &);
};
#endif