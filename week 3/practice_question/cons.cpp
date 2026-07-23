#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor Called" << endl;
    }

    ~Demo() {
        cout << "Destructor Called" << endl;
    }

    void display() {
        cout << "Inside Display Function" << endl;
    }
};

int main() {
    Demo d;
    d.display();

    return 0;
}