#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while(t--){
        int n,target; cin >> n>> target;
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        bool found =false;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (arr[j]-arr[i]==target){
                    found=true;
                    break;
                }

                if (found) break;
            }
        }

        if (found) cout << 1<< endl;
        else cout << 0<< endl;

        

    }

}
