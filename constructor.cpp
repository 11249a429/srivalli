#include <iostream>
using namespace std;
class Demo {
private:
    int number;
public:
    Demo(int n) {
        number = n;
        cout << "Constructor called! Number is initialized to " << number << endl;
    }
    ~Demo() {
        cout << "Destructor called! Object with number " << number << " is destroyed." << endl;
    }
    void display() {
        cout << "Number: " << number << endl;
    }
};

int main() {
    Demo obj1(5);
    obj1.display();
    {
        obj2.display();
    return 0;
}