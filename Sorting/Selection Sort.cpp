#include <iostream>
using namespace std; 

// Function to perform Selection Sort on an array
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i; // Assume the first unsorted element is the smallest
        // Find the minimum element in the unsorted portion of the array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j; // Update minIdx if a smaller element is found
            }
        }
        // Swap the found minimum element with the first unsorted element
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    // Initially the array and varibales contain garbage values
    int n = 5;
    int arr[] = {64, 25, 12, 22, 11};
    
    // Sort the array using Selection Sort
    selectionSort(arr, n);
    
    return 0; 
}