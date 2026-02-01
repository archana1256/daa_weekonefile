// Question: Given an already sorted array of positive integers, design an algorithm to check whether a given key element is present in the array or not and find the total number of comparisons.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;                 // size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];        // sorted array elements
    }

    int key;
    cin >> key;               // key element to search

    int low = 0, high = n - 1;
    int comparisons = 0;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;
        comparisons++;        // one comparison with middle element

        if (arr[mid] == key) {
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found)
        cout << "Present " << comparisons << endl;
    else
        cout << "Not Present " << comparisons << endl;

    return 0;
}
