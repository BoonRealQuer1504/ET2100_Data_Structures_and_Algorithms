#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int count = 0;
        for (int i=0;i<n;i++){
            int x = upper_bound(arr.begin(), arr.end(),arr[i]) - arr.begin();
            if (2*x> n){
                count = n-i;
                break;
            }
        }


        cout << count << endl;
    }

}
