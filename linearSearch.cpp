#include <iostream>

using namespace std;

int main()
{
    int n, i, count = 0, value;

    cout << "Enter the size of array" << endl;

    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++) {
        cout << "Enter the number for position: " << i + 1 << endl;
        cin >> arr[i];
    }

    cout << "Enter the value that you want to search" << endl;
    cin >> value;

    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
            cout << "Value " << value << " have found in index: " << i << endl;
        }
    }

    if (!count) {
        cout << "Value " << value << " is not exist in the array" << endl;
    } else {
        cout << "Value " << value << " found " << count << " times" << endl;
    }
}