#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initially the variables contain garbage values.
    vector<int> arr = {1, 3, 5, 7, 9};

    auto lb = lower_bound(arr.begin(), arr.end(), 5); // first element greater than or equal to the given value
    auto ub = upper_bound(arr.begin(), arr.end(), 5); // first element greater than the given value

    int lowerBound = lb - arr.begin(); // Output: 2
    int upperBound = ub - arr.begin(); // Output: 3

    return 0;
}