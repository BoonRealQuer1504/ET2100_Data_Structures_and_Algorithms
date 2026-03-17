#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>&arr){
    unordered_map<int,int> mp;
    for (int x: arr){
        mp[x]++;
        if (mp[x] > arr.size()/2) return x;
    } 

    return -1;
}

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n; vector<int> a(n);
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        cout << majorityElement(a)<< endl;
    }
}