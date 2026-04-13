#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int left = 0, right = INT16_MAX;
        int ans=0;
        while (left <= right){
            int mid = (right-left)/2+ left;
            if ((mid*(mid+1)/2) <= n){
                ans = mid;
                left = mid +1 ;
            }

            else {
                right = mid -1;
            }
        }

        cout << ans << endl;
    }



}
