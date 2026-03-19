#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<vector<int>> mat(n, vector<int>(2,0));
	for (int i=0;i<n;i++){
        cin >> mat[i][0]>> mat[i][1]; 
    }

    int val1, val2;
    cin >> val1>>val2;
    bool found=false;
    for (int i=0;i<n;i++){
        if ((val1== mat[i][0] and val2==mat[i][1]) or (val2==mat[i][0] and val1==mat[i][1])){
            found=true;
            break;
        }
    }

    if (found) cout << "YES"<< endl;
    else cout << "NO"<< endl;

}
