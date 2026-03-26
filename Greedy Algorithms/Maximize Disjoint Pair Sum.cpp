#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--){
        int n, value; cin >> n >> value;

        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), greater<int>());
        int sum =0;
        int iter=0;
        while(iter<n-1){
            if (arr[iter]-arr[iter+1] < value){
                sum+=arr[iter]+arr[iter+1];
                iter+=2;
            }

            else{
                iter++;
            }

        }

        cout << sum << endl;
        
    }

}
