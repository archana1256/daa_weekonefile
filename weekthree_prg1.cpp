/*
I.
Given an unsorted array of integers, design an algorithm and implement a
program to sort the array using insertion sort. The program should be able
to find the number of comparisons and shifts (shifts = total number of times
the array elements are shifted from their place) required for sorting the array.

Input Format:
- First line contains number of test cases T.
- For each test case:
  * First line contains n (size of array)
  * Second line contains space-separated integers describing the array

Output Format:
- For each test case:
  * First line prints the sorted array
  * Second line prints total number of comparisons
  * Third line prints total number of shifts
*/

#include <iostream>
#include <vector>
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

        int comparisons = 0;
        int shifts = 0;

        // Insertion Sort
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0) {
                comparisons++;
                if (arr[j] > key) {
                    arr[j + 1] = arr[j]; // shift
                    shifts++;
                    j--;
                } else {
                    break;
                }
            }
            arr[j + 1] = key;
        }

        // Output sorted array
        cout << "Sorted array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "comparisons = " << comparisons << endl;
        cout << "shifts = " << shifts << endl;
    }

    return 0;
}
