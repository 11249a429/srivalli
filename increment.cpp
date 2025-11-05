#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int v = 0) {
        value = v;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
    Number& operator++() {
        value++;
        return *this;
    }