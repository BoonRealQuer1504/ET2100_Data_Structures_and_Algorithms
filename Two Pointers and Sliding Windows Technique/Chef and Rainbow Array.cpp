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

        bool valid = true;
        if (n%2==0) valid = false;
        else{
            int l=0, r=n-1;
            while(l<=r){
                if (l==r and arr[l]!=7){
                    valid = false;
                    break;
                }

                else{
                    if (arr[l]!= arr[r]){
                        valid = false;
                        break;
                    }
                }
                l++;
                r--;
            }
        }


        if (valid) cout << "YES"<< endl;
        else  cout << "NO"<< endl;


    }



}
