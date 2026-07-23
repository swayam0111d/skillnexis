#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {45, 10, 80, 25, 60};

    sort(numbers.begin(), numbers.end());

    cout << "Sorted Vector: ";
    for (int i : numbers) {
        cout << i << " ";
    }

    return 0;
}