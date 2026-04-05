#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    if (binary_search(arr.begin(), arr.end(), 5)) {
        cout << "5 is present\n";
    } else {
        cout << "5 is not present\n";
    }
    return 0;
}