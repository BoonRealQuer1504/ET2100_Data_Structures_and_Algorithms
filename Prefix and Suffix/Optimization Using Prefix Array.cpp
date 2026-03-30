#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    vector<int> arr(n), prefix(n);
    for (int i=0;i<n;i++){
        cin >> arr[i];
        if (i==0){
            prefix[i]=arr[i];
        }

        else{
            prefix[i]=prefix[i-1]+arr[i];
        }
    }

    int k; cin >> k;
    while(k--){
        int a,b; cin >> a>>b;

        if (a==1) cout << prefix[b-1]<< endl;
        else cout << prefix[b-1]-prefix[a-2]<< endl;

    }



}
