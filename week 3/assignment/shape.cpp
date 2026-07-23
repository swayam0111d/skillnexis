#include <iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "This is a shape" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area(int l, int b) {
        cout << "Rectangle Area: " << l * b << endl;
    }
};

class Circle : public Shape {
public:
    void area(float r) {
        cout << "Circle Area: " << 3.14 * r * r << endl;
    }
};

int main() {
    Rectangle r;
    Circle c;

    r.display();
    r.area(5, 4);

    c.display();
    c.area(3);
}