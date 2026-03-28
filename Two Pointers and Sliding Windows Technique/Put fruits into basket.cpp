#include <bits/stdc++.h>
using namespace std;


int totalFruits(vector<int>&fruits){
    unordered_map<int, int> mp;
    int left=0, max_fruit=0;
    for (int right=0;right<fruits.size();right++){
        mp[fruits[right]]++;
        while(mp.size()>2){
            mp[fruits[left]]--;
            if (mp[fruits[left]]==0){
                mp.erase(fruits[left]);
            }

            left++;
        }

        max_fruit= max(max_fruit, right-left+1);
    }

    return max_fruit;
}

int main() {
	int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }

        cout << totalFruits(arr)<< endl;
    }


}
