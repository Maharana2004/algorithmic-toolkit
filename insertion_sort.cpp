#include <iostream>
#include <vector>
using namespace std;

// Insertion Sort: sorts the array in ascending order
void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements of arr[0..i-1] that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }

        // Place key at its correct position
        arr[j + 1] = key;
    }
}

// Utility to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Dry run example
int main() {
    vector<int> data = {12, 11, 13, 5, 6};
    cout << "Original array: ";
    printArray(data);

    insertionSort(data);

    cout << "Sorted array:   ";
    printArray(data);

    return 0;
}
