#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--){
	    int n; cin >> n;
	    int a[n], b[n];
	    int count=0, start=0;
	    for (int i=0;i<n;i++ ){
	        cin >> a[i];}
	    for (int i=0;i<n;i++){
	        cin >> b[i];
	    
	        if(a[i]-start >=b[i]){
	            count++;
	        }
	        start  = a[i];
	    }	    
	    cout << count<<"\n";
	}

}
