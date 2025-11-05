#include <iostream>
using namespace std;
class MyString {
private:
    string str;
public:
    MyString(string s = "") {
        str = s;
    }
    void display() {
        cout << str << endl;
    }
    MyString operator+(const MyString &s) {
        MyString temp;
        temp.str = str + s.str; 
        return temp;
    }
};
int main() {
    MyString s1("Hello, ");
    MyString s2("World!");
    MyString s3;
    cout << "String 1: ";
    s1.display();
    cout << "String 2: ";
    s2.display();
    s3 = s1 + s2;
    cout << "After concatenation: ";
    s3.display();
    return 0;
}