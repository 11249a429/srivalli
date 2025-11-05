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
    Number operator-() {
        Number temp;
        temp.value = -value; 
        return temp;
    }
};
int main() {
    Number n1(10);
    Number n2;
    cout << "Original number:" << endl;
    n1.display();
    n2 = -n1;
    cout << "After applying unary minus:" << endl;
    n2.display();
    return 0;
}