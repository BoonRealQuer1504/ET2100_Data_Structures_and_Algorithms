#include <bits/stdc++.h>
using namespace std;

// Function to perform binary search
int binary_search_condition(int left, int right) {
    while (left < right) {
        int middle = left + (right - left) / 2; // Calculate the middle point
        
        // Check the condition directly
        if (middle * middle >= 50) {
            right = middle; // Solution may lie on the left or at the middle
        } else {
            left = middle + 1; // Solution must lie on the right
        }
    }
    return left; // Left will hold the smallest value satisfying the condition
}

int main() {
    // Define the range for the search
    int left = 1, right = 100;

    // Perform binary search
    int result = binary_search_condition(left, right);

    return 0;
}