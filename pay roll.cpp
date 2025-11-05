#include <iostream>
#include <iomanip> // for formatting
using namespace std;

class Employee {
private:
    string name;
    int empID;
    double basicSalary;
    double hra; 
    double da;
    double grossSalary;
public:
    void inputDetails() {
        cout << "Enter Employee Name: ";
        cin.ignore(); // to clear buffer
        getline(cin, name);
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
    void calculatePayroll() {
        hra = 0.10 * basicSalary;
        da = 0.05 * basicSalary;
        grossSalary = basicSalary + hra + da;
    }
    void displayPayroll() {
        cout << fixed << setprecision(2);
        cout << "\n------ Employee Payroll ------" << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Employee ID   : " << empID << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA           : " << hra << endl;
        cout << "DA            : " << da << endl;
        cout << "Gross Salary  : " << grossSalary << endl;
    }
};
int main() {
    Employee emp;
    emp.inputDetails();
    emp.calculatePayroll();
    emp.displayPayroll(); 
    return 0;
}