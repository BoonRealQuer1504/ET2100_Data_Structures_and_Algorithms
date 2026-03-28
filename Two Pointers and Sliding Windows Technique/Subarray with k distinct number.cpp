#include <bits/stdc++.h>
using namespace std;

int countK(vector<int> &arr, int k){
    unordered_map<int,int> mp;
    int left=0, count=0;
    for (int right=0;right<arr.size();right++){
        mp[arr[right]]++;
        while(mp.size()>k){
            mp[arr[left]]--;
            if (mp[arr[left]]==0){
                mp.erase(arr[left]);
                
            }

            left++;
        }

        count+=  right-left+1;
    }

    return count;
}

int main() {
	int t; cin >> t;
    while(t--){
        int n, k; cin >> n>>k;
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }


        cout << countK(arr,k) - countK(arr,k-1) << endl;
    }


}
