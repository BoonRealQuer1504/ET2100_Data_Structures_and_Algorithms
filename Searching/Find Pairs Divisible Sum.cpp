#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
    cin >> n >> k;
    
    vector<pair<int, int>> pairs(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> pairs[i].first >> pairs[i].second;
    }
    
    for (int i=0;i<n;i++){
        if ((pairs[i].first+pairs[i].second)%k==0){
            cout << "(" << pairs[i].first << ", " << pairs[i].second << ")" << endl;
        }
    }
	    

}
