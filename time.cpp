#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }
    void display() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
    void addTime(Time t1, Time t2) {
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours + minutes / 60;
        minutes = minutes % 60;
    }
};
int main() {
    Time t1(2, 45); 
    Time t2(1, 30); 
    Time t3;
    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();
    t3.addTime(t1, t2);
    cout << "Sum of Time 1 and Time 2: ";
    t3.display();
    return 0;
}