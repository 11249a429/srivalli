#include <iostream>
using namespace std;
class Student {
private:
    string name;
    float height; // in centimeters
public:
    Student(string n = "", float h = 0.0) {
        name = n;
        height = h;
    }
    void input() {
        cout << "Enter student name: ";
        cin.ignore(); // clear input buffer
        getline(cin, name);
        cout << "Enter student height (in cm): ";
        cin >> height;
    }
    void display() {
        cout << "Name: " << name << ", Height: " << height << " cm" << endl;
    }
    bool operator>(const Student &s) {
        return height > s.height;
    }
    bool operator<(const Student &s) {
        return height < s.height;
    }
    bool operator==(const Student &s) {
        return height == s.height;
    }
};
int main() {
    Student s1, s2;
    cout << "Enter details of first student:\n";
    s1.input();
    cout << "Enter details of second student:\n";
    s2.input();
    cout << "\nStudent Details:\n";
    s1.display();
    s2.display();
    if (s1 == s2)
        cout << "Both students have the same height." << endl;
    else if (s1 > s2)
        cout << s1.name << " is taller than " << s2.name << "." << endl;
    else
        cout << s1.name << " is shorter than " << s2.name << "." << endl;
    return 0;
}