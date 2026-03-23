#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--){
        int n, value;
        cin >> n>> value;
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        double sum =0;
        for (int i=value;i<n-value;i++){
            sum +=arr[i];
        }
        cout << fixed;
        cout << setprecision(6)<< sum/(n-(value*2))<< endl;
    }

}
