#include <iostream>
using namespace std;

class Clock{
private:
    int hour, minute, second;

public:
    Clock();
    void setTime(int newH, int newM, int newS);
    void showTime();
};

Clock::Clock() : hour(0), minute(0), second(0){}    //构造函数

void Clock::setTime(int newH, int newM, int newS){
    hour = newH;
    minute = newM;
    second = newS;
}

void Clock::showTime(){
    cout << hour << ": " << minute << ": " << second <<endl;
}

Clock globClock;

int main(){
    cout << "First time output:" << endl;
    globClock.showTime();
    globClock.setTime(8, 30, 30);

    Clock myClock(globClock);
    cout << "Second time output: " << endl;
    myClock.showTime();

    return 0;
}

