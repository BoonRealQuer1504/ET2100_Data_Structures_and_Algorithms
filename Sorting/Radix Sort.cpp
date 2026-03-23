#include <bits/stdc++.h>
using namespace std;

// Counting Sort function to sort based on a specific digit (exp)
void countingSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n), count(10,0);

    // Count the occurrences of each digit in the given place (exp)
    for (int i = 0; i < n; ++i) {
        count[(arr[i] / exp) % 10]++;
    }

    // Compute cumulative count to determine positions
    for (int i = 1; i < 10; ++i) {
        count[i] += count[i - 1];
    }

    // Build the output array using the count array
    for (int i = n - 1; i >= 0; --i) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the sorted array back to the original array
    for (int i = 0; i < n; ++i) arr[i] = output[i];
}

// Radix Sort function
void radixSort(vector<int>& arr) {
    // Find the maximum number to determine the number of digits
    int max_val = *max_element(arr.begin(), arr.end());

    // Perform counting sort for every digit. exp is 10^i (i.e., 1, 10, 100, ...)
    for (int exp = 1; max_val / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

// Main function to test the Radix Sort implementation
int main() {
    vector<int> arr = {170, 45, 75, 90, 802};

    // Perform radix sort
    radixSort(arr);

    return 0;
}