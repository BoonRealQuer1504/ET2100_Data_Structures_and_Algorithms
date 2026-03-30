#include <bits/stdc++.h>
using namespace std;



int solveGCD(vector<int> arr, int n){
    if (n==1) return 0;
    vector<int> pre(n), suf(n);
    pre[0]=arr[0];
    for (int i=1;i<n;i++){
        pre[i]= gcd(pre[i-1], arr[i]);

    }


    suf[n-1]= arr[n-1];
    for (int i=n-2;i>=0;i--){
        suf[i]=gcd(suf[i+1], arr[i]);
    }


    int max_gcd=0;
    for (int i=0;i<n;i++){
        int curr ;
        if (i==0){
            curr= suf[1];
        }


        else if (i==n-1){
            curr=pre[n-2];
        }

        else {
            curr = gcd(pre[i-1], suf[i+1]);
        }

        max_gcd = max(max_gcd, curr);
    }


    return max_gcd;
}







int main() {
	int n; cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << solveGCD(arr,n) << endl;
}
