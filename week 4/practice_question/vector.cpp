#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    cout << "Vector Elements: ";
    for (int i : numbers) {
        cout << i << " ";
    }

    return 0;
}