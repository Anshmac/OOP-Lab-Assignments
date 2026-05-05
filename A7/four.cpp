#include <iostream>
using namespace std;

class Time {
    int h, m, s;
public:
    Time() {
        h = 0;
        m = 0;
        s = 0;
    }
    
    Time(int hours, int minutes, int seconds) {
        h = hours;
        m = minutes;
        s = seconds;
    }
    
    Time operator+(Time const& obj) {
        Time res;
        res.s = s + obj.s;
        res.m = m + obj.m + res.s / 60;
        res.s %= 60;
        res.h = h + obj.h + res.m / 60;
        res.m %= 60;
        return res;
    }
    
    void show() {
        cout << h << " hours, " << m << " minutes, " << s << " seconds" << endl;
    }
};

int main() {
    Time t1(5, 15, 34), t2(9, 53, 58), t3;
    t3 = t1 + t2;
    t3.show();
    return 0;
}