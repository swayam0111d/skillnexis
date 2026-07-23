#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr;

    cout << "Enter elements:\n";
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    cout << "Sorted Elements:\n";
    for(int x : arr)
        cout << x << " ";

    return 0;
}