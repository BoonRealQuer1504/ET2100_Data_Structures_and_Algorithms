#include <bits/stdc++.h>
using namespace std;

// Partition function to rearrange elements around pivot
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // Taking the last element as the pivot
    int i = low - 1;        // Pointer for the smaller element
    
    // Traverse the array from low to high-1
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {  // If current element is smaller than the pivot
            i++;  // Increment the pointer for smaller elements
            swap(arr[i], arr[j]);  // Swap arr[i] and arr[j]
        }
    }
    
    // Swap arr[i + 1] and arr[high] (pivot) to place the pivot in its correct position
    swap(arr[i + 1], arr[high]);
    return (i + 1);  // Return the pivot index
}

// Quick sort function
void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Partition the array and get the pivot index
        quicksort(arr, low, pi - 1);  // Recursively sort the left part
        quicksort(arr, pi + 1, high); // Recursively sort the right part
    }
}

int main() {
    // Input array
    vector<int> arr = {9, 3, 8, 4, 7};
    int n = arr.size();

    // Perform quicksort on the array
    quicksort(arr, 0, n - 1);
    
    return 0;
}