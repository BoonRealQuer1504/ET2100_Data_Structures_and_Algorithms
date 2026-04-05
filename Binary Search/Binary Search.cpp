#include <bits/stdc++.h> 
using namespace std;

// Initially the variables and array contain garbage values
// Function to perform binary search on a sorted array
int binary_search(int arr[], int n, int k) {
    int left = 0, right = n - 1; // Define the search range
    while (left <= right) {     // Continue searching while the range is valid
        int mid = (left + right) / 2; // Find the middle index
        // Check if the middle element is the target
        if (arr[mid] == k) { 
            return mid; // If found, return the index
        } 
        // If the middle element is greater than the target
        else if (arr[mid] > k) { 
            right = mid - 1; // Narrow the search to the left half
        } 
        // If the middle element is less than the target
        else { 
            left = mid + 1; // Narrow the search to the right half
        }
    }
    return -1; // If the target is not found, return -1
}

int main() {
    int n, value; cin >> n >> value;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << binary_search(arr, n, value)<<endl;
}