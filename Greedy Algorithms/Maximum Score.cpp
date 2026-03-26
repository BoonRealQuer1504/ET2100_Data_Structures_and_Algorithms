#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--){
        int n; cin >> n;
        vector<vector<long long>> A(n, vector<long long>(n));
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cin >> A[i][j];
            }

            sort(A[i].begin(), A[i].end());
        }

        long long sum =0;
        long long lim = A[n-1][n-1];
        sum+=lim;
        bool possible=true;
        for (int i=n-2;i>=0;i--){
            bool found_in_row=false;
            for (int j=n-1;j>=0;j--){
                if (A[i][j]<lim){
                    lim = A[i][j];
                    sum+=A[i][j];
                    found_in_row=true;
                    break;
                }


            }

            
            if (!found_in_row){
                possible=false;
                break;
            }
        }


        if (possible) cout << sum << endl;
        else cout << -1<< endl;
    }

}
