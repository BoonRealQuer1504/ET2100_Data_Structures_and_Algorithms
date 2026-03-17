#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>&nums, int N){
    sort(nums.begin(), nums.end());
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }

    sortColors(a,n);
    for (int i=0;i<n;i++){
        cout << a[i]<< " ";
    }

    
}