#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> stack;

    vector<int> nse(n, -1);


    for (int i = n - 1; i >= 0; i--) {

        while (!stack.empty() && stack.top() >= arr[i]) {
            stack.pop();
        }

        if (!stack.empty()) {
            nse[i] = stack.top();
        } else {
            nse[i] = -1;
        }

        // Push the current element to stack
        stack.push(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << nse[i] << " ";
    }
    cout << endl;
}
