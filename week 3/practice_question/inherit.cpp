#include <iostream>
using namespace std;

class Shape {
public:
    void message() {
        cout << "This is Shape Class" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area(int l, int b) {
        cout << "Rectangle Area = " << l * b << endl;
    }
};

class Circle : public Shape {
public:
    void area(float r) {
        cout << "Circle Area = " << 3.14 * r * r << endl;
    }
};

int main() {
    Rectangle r;
    Circle c;

    r.message();
    r.area(5, 4);

    c.message();
    c.area(7);

    return 0;
}