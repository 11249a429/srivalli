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
        cin.ignore();  // Clear input buffer
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter publication year: ";
        cin >> year;
        cout << "Enter price: ";
        cin >> price;
    }
    void displayDetails() {
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nYear: " << year;
        cout << "\nPrice: $" << price << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of books in library: ";
    cin >> n;
    Book library[n];
    cout << "\n--- Enter Details for " << n << " Books ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << ":\n";
        library[i].inputDetails();
    }
    cout << "\n\n--- Library Book Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << ":";
        library[i].displayDetails();
    }
    return 0;
}