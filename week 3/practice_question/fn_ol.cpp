#include <iostream>
using namespace std;

class Addition {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Addition obj;

    cout << "Sum of 2 Integers: " << obj.add(10, 20) << endl;
    cout << "Sum of 2 Floats: " << obj.add(10.5f, 20.3f) << endl;
    cout << "Sum of 3 Integers: " << obj.add(10, 20, 30) << endl;

    return 0;
}