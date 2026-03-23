#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if (x<y and x<z) cout << "ALICE"<< endl;
        else if (y<x and y<z) cout << "BOB"<< endl;
        else cout << "CHARLIE"<< endl;
    }

}
