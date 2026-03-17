#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&nums){
    int n = nums.size();
    while(n--){
        bool found = false;
        for (int i=0;i<nums.size();i++){
            if(n==nums[i]){
                found = true;
                break;
            }
        }

        if (!found){
            return n;
        }
    }

    return -1;
}



int main() {
	int t; cin >> t; while(t--){
	int n; cin >> n; 
	vector<int> a(n); 
    for (int i=0;i<n;i++){
	    cin >> a[i];
	}
	    
	cout << missingNumber(a) << "\n";
	}

}
