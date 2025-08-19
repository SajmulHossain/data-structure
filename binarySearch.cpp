#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cout << "Enter the value for index: " << i << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Enter the value that you want to search" << endl;
    cin >> key;

    int low = 0, high = n - 1, mid, foundIndex = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (foundIndex == -1) cout << "Value not found" << endl;
    else cout << "Value found at index " << foundIndex << endl;
}
