#include <bits/stdc++.h>
using namespace std;


void moveZeroes(vector<int>&nums){
        int pos=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=0){
                swap(nums[i], nums[pos]);
                pos++;
            }
        }
}


int main() {
	int t; cin >> t; while(t--){
	    int n; cin >> n; 
	    vector<int> a(n); 
        for (int i=0;i<n;i++){
	        cin >> a[i];
	    }

        moveZeroes(a);

	    for (int i=0;i<n;i++){
            cout << a[i]<<' ';
        }

        cout << endl;
	}

}
