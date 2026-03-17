#include<bits/stdc++.h>
using namespace std;

vector<int> findLeaders(vector<int> nums){
    vector<int> result;
    int max=0;
    for (int i=nums.size()-1;i<0;i--){
        if (i==nums.size()-1){
            result.push_back(nums[i]);
            max = nums[i];
        }

        else {
            if (nums[i]>max){
                result.push_back(nums[i]);
                max = nums[i];
            }
        }
    }

    reverse(result.begin(), result.end());

    return result;
}

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i=0;i<n;i++){
            cin >> a[i];
        }

        for (int x: findLeaders(a)){
            cout << x<< " ";
        }
    }




    
}