#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
    float marks;
public:
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayDetails() {
        cout << "\n--- Student Information ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student s1;
    s1.inputDetails();
    s1.displayDetails();
    return 0;
}
