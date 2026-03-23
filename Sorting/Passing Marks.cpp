#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        
        sort(a, a+n,greater<int>());
        int result;
        for (int i=0;i<x;i++){
            result=a[i];
        }
        
        cout << result-1 << endl;
    }

}
