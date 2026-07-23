#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout("data.txt");

    fout << "Welcome to C++ File Handling\n";
    fout << "Name: Swayam Raj\n";
    fout << "Course: B.Tech IT";

    fout.close();

    ifstream fin("data.txt");
    string line;

    cout << "File Contents:\n";
    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();

    return 0;
}