#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--){
	    int n; cin >> n;
	    int a[n], b[n];
        int max=0, count=0;
	    for (int i=0;i<n;i++ ){
	        cin >> a[i];}
	    for (int i=0;i<n;i++){
	        cin >> b[i];
            if(a[i]!=0 and b[i]!=0){
                count++;
                if(count>max){
                    max=count;
                }
            }
            else{
                count=0;
            }
        }

        cout << max << endl;
	}

}
