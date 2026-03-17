#include <bits/stdc++.h>
using namespace std;


int longestSubarraySum(vector<int> &arr, int k){
    int max =0;
    for (int i=0;i<arr.size();i++){
        int count=1;
        int sum = arr[i];
        if (sum==k){
            if (count>max){
                max=count;
            }
        }

        else{
            for (int j=i+1;j<arr.size();j++){
                count++;
                sum+=arr[j];
                if (sum==k){
                    if (count>max){
                        max=count;
                    }
                }
            }
        }
    }

    return max;
}


int main() {
	int t; cin >> t; while(t--){
	    int n, value; cin >> n>> value; 
	    vector<int> a(n);
        for (int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    cout << longestSubarraySum(a, value)<< endl;
	    
	    
	}

}