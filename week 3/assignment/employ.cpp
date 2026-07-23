#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    float basic, hra, da, totalSalary;

public:
    void setData(string n, float b) {
        name = n;
        basic = b;
        hra = 0.2 * basic;   // 20% HRA
        da = 0.1 * basic;    // 10% DA
        totalSalary = basic + hra + da;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main() {
    Employee e1;
    e1.setData("Swayam", 20000);
    e1.display();
}