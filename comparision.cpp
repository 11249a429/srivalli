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
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }
    void display() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
    bool operator==(const Time &t) {
        return (hours == t.hours && minutes == t.minutes);
    }
    bool operator<(const Time &t) {
        if (hours < t.hours)
            return true;
        else if (hours == t.hours && minutes < t.minutes)
            return true;
        else
            return false;
    }
    bool operator>(const Time &t) {
        if (hours > t.hours)
            return true;
        else if (hours == t.hours && minutes > t.minutes)
            return true;
        else
            return false;
    }
};
int main() {
    Time t1, t2;
    cout << "Enter first time:\n";
    t1.input();
    cout << "Enter second time:\n";
    t2.input();
    t1.display();
    t2.display();
    if (t1 == t2)
        cout << "Both times are equal." << endl;
    else if (t1 > t2)
        cout << "First time is greater than second time." << endl;
    else
        cout << "First time is less than second time." << endl;
    return 0;
}