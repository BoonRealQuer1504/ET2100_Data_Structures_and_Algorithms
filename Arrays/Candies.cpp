#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    std::vector<int> a(2*n) ;
	    for (int i=0;i<2*n;i++){
	        cin >> a[i];
	    }
	    sort(a.begin(), a.end());
	    bool valid=true;
	    for (int i=1;i<2*n;i++){
	        if(a[i]==a[i+1] && a[i]==a[i-1]){
	            valid = false;
	            break;
	        }
	    }
	    
	    if(valid) cout << "YES\n";
	    else cout << "NO\n";
	    
	}

}
