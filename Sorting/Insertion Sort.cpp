#include <iostream>
using namespace std;

// Function to perform Insertion Sort on an array
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Element to be inserted into the sorted part
        int j = i - 1;

        // Shift elements of the sorted part to the right to make space for the key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Place the key in its correct position
        arr[j + 1] = key;
    }
}
int main() {
    // Initially the array and variables contain garbage values
    int arr[] = {5, 2, 4, 6};
    int n = 4;

    // Sort the array using Insertion Sort
    insertionSort(arr, n);

    return 0;
}