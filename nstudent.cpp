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
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayDetails() {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << rollNumber;
        cout << "\nMarks: " << marks << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student students[n];
    cout << "\n--- Enter Details for " << n << " Students ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].inputDetails();
    }
    cout << "\n\n--- Student Information ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":";
        students[i].displayDetails();
    }
    return 0;
}
