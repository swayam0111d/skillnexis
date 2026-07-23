#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;  // Pure virtual function
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Rectangle Area: " << 20 << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Circle Area: " << 28.26 << endl;
    }
};

int main() {
    Shape* s;
    Rectangle r;
    Circle c;

    s = &r;
    s->area();

    s = &c;
    s->area();
}