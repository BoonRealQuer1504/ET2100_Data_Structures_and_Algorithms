#include <bits/stdc++.h>
using namespace std;

// Function to perform Counting Sort
vector<int> countingSort(int n, vector<int>& arr, int k) {
    // Step 1: Initialize count array with size k (range of elements in arr)
    vector<int> count(k, 0);
    
    // Step 2: Count occurrences of each integer in arr
    for (int num : arr) {
        count[num]++;
    }
    
    // Step 3: Create a result array where sorted elements will be stored
    vector<int> result;
    
    // Step 4: Build the sorted array using the count array
    for (int i = 0; i < k; ++i) {
        while (count[i]--) {
            result.push_back(i);
        }
    }
    
    return result;
}

int main() {
    // Initially the array and variables contain garbage values
    int n = 10; // Number of elements
    vector<int> arr = {4, 2, 2, 8, 3, 5, 1, 3, 6, 9}; // The input array
    int k = 10; // The range of elements in the array, 0 to 9

    // Perform counting sort on the input array
    vector<int> sorted_array = countingSort(n, arr, k);

    return 0;
}