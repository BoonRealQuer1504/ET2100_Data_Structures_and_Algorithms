#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    
    vector<pair<int, int>> pairs(n);
    
    
    
    for (int i = 0; i < n; ++i) {
        cin >> pairs[i].first >> pairs[i].second;
    }
    
    int a,b; cin >> a>>b;
    
    
    for (int i=0;i<n;i++){
        if ((pairs[i].first+pairs[i].second)>=a and (pairs[i].first+pairs[i].second)<=b and (pairs[i].first*pairs[i].second)>=a
        and (pairs[i].first*pairs[i].second)<=b){
            cout << pairs[i].first << " " << pairs[i].second <<  endl;
        }
    }
	    

}
