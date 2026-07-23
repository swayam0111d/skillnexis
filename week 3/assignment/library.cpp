#include <iostream>
using namespace std;

class Book {
public:
    int id;
    string name;
    bool issued;

    void addBook(int i, string n) {
        id = i;
        name = n;
        issued = false;
    }

    void display() {
        cout << id << " - " << name;
        if (issued) cout << " (Issued)";
        else cout << " (Available)";
        cout << endl;
    }
};

int main() {
    Book b[3];

    b[0].addBook(1, "C++ Basics");
    b[1].addBook(2, "Data Structures");
    b[2].addBook(3, "OOP Concepts");

    cout << "Library Books:\n";
    for(int i=0;i<3;i++)
        b[i].display();

    // Issue book
    b[1].issued = true;

    cout << "\nAfter issuing book:\n";
    for(int i=0;i<3;i++)
        b[i].display();

    return 0;
}