#include <iostream>
using namespace std;

void countNumbers(int arr[], int n)
{
    int positive = 0, negative = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
    }

    cout << "Positive Numbers = " << positive << endl;
    cout << "Negative Numbers = " << negative << endl;
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    countNumbers(arr, n);

    return 0;
}