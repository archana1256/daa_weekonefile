/*
III.
Given an unsorted array of positive integers, design an algorithm and
implement it using a program to find whether there are any duplicate
elements in the array or not. (Use sorting)

Time Complexity: O(n log n)

Input Format:
- First line contains number of test cases T.
- For each test case:
  * First line contains n (size of array)
  * Second line contains space-separated integers describing the array

Output Format:
- For each test case:
  * Print "YES" if duplicates are present
  * Otherwise print "NO"
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cout << "Enter number of test cases: ";
    cin >> T;

    while (T--) {
        int n;
        cout << "Enter size of array: ";
        cin >> n;

        vector<int> arr(n);
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Sort the array
        sort(arr.begin(), arr.end());

        bool duplicateFound = false;

        // Check adjacent elements
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                duplicateFound = true;
                break;
            }
        }

        if (duplicateFound)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
