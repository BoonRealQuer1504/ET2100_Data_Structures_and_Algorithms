#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    int r=sqrt(n);
    int l=0;
    bool valid = false;
    while(l<=r){
        int sum = l*l+r*r;
        if (sum==n){
            valid = true;
            break;
        }

        else if (sum < n){
            l++;
        }

        else{
            r++;
        }
    }


    if (valid ) cout << "YES"<< endl;
    else cout << "NO"<< endl;
    



}
