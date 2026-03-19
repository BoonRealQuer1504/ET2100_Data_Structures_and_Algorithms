#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int min_diff = INT_MAX;
    int result = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        int diff = abs(arr[i] - k);
        if (diff < min_diff || (diff == min_diff && arr[i] < result)) {
            min_diff = diff;
            result = arr[i];
        }
    }
    
    cout << result << endl;
    return 0;
}
