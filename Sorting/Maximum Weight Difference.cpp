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

        int kid=0, dad=0;
        for (int i=0;i<value;i++){
            kid+=arr[i];
        }


        for (int i=value;i<n;i++){
            dad +=arr[i];
        }


        cout << dad-kid << endl;
    }

}
