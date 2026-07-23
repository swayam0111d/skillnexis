#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing to file
    ofstream outFile("student.txt");
    outFile << "Name: Swayam\n";
    outFile << "Age: 20\n";
    outFile.close();

    // Reading from file
    ifstream inFile("student.txt");
    string line;

    cout << "File Content:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}