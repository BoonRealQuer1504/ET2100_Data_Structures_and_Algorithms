#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        string v;
        cin>>v;
        int result = INT16_MAX;
        for (int i=0;i<n;i++){
            if (v[i]=='0' and s[i]< result){
                result= s[i];
            }
        }

        cout << result << endl;
    }

}
