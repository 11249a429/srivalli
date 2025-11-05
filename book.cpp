#include <iostream>
using namespace std;
class Book {
private:
    string title;
    string author;
    int year;
    float price;
public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter publication year: ";
        cin >> year;
        cout << "Enter price: ";
        cin >> price;
    }
    void displayDetails() {
        cout << "\n--- Book Details ---\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }
};
int main() {
    Book b1;
    b1.inputDetails();
    b1.displayDetails();
    return 0;
}
