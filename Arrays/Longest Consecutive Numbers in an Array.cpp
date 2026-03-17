#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>&arr){
    sort(arr.begin(), arr.end());
    int maxLen=0;
    int count=1;
    for (int i=1;i<arr.size();i++){
        if (arr[i]==arr[i-1]+1){
            count++;
        }

        else if (arr[i]==arr[i-1]){
            continue;
        }
        else {
            if (count> maxLen) maxLen = count;
            count=1;
        }


        
    }
    maxLen = max(maxLen, count);
    return maxLen;
}

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n; vector<int> a(n);
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        cout << longestConsecutive(a)<< endl;
    }
}