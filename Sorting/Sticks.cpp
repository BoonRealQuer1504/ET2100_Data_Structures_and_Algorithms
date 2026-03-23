#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }

        vector<long long> candidates;
        for (auto const& [val, count] : mp) {
            // Nếu có 4 thanh trở lên, nó có thể tạo thành 2 cặp cạnh (hình vuông)
            if (count >= 4) {
                candidates.push_back(val);
                candidates.push_back(val);
            } 
            // Nếu có 2 hoặc 3 thanh, nó tạo được 1 cặp cạnh
            else if (count >= 2) {
                candidates.push_back(val);
            }
        }

        // Sắp xếp giảm dần để lấy 2 cạnh lớn nhất
        sort(candidates.rbegin(), candidates.rend());

        if (candidates.size() < 2) {
            cout << -1 << endl;
        } else {
            // Diện tích có thể rất lớn nên dùng long long
            cout << candidates[0] * candidates[1] << endl;
        }
    }
    return 0;
}
