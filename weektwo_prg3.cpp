/*
III.
Given an array of non-negative integers, design an algorithm and implement
a program to count the number of pairs of integers such that their
difference is equal to a given key K.

Input Format:
- First line contains number of test cases T.
- For each test case:
  * First line contains n (size of array)
  * Second line contains space-separated integers describing the array
  * Third line contains the key element K

Output Format:
- For each test case, print the total count of pairs
  such that the difference is equal to K.
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

        int K;
        cout << "Enter key (difference value): ";
        cin >> K;

        // Sort the array
        sort(arr.begin(), arr.end());

        int count = 0;
        int i = 0, j = 1;

        // Two-pointer approach
        while (j < n) {
            int diff = arr[j] - arr[i];

            if (diff == K) {
                count++;
                i++;
                j++;
            } 
            else if (diff < K) {
                j++;
            } 
            else {
                i++;
                if (i == j) {
                    j++;
                }
            }
        }

        cout << "Total pairs with difference " << K << " = " << count << endl;
    }

    return 0;
}
