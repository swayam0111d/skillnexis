#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> student;

    student["Swayam"] = 20;
    student["Rahul"] = 21;
    student["Priya"] = 19;

    cout << "Student Details:\n";
    for (auto s : student) {
        cout << s.first << " : " << s.second << endl;
    }

    return 0;
}