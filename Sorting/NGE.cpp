#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> nge(n, -1);
    stack<int> s;

    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && s.top() <= nums[i]) {
            s.pop();
        }
        if (!s.empty()) {
            nge[i] = s.top();
        }
        s.push(nums[i]);
    }

    return nge;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> result = nextGreaterElement(nums);
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
