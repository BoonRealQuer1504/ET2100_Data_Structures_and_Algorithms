#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b(n), c;
        for (int i=0;i<n;i++){
            cin >> a[i];
            c.push_back(a[i]);

        }


        for (int i=0;i<n;i++){
            cin >> b[i];
            c.push_back(b[i]);
        }


        sort(c.begin(), c.end());
        int result= INT16_MAX;
        for (int i=0;i<=n;i++){
            int temp = c[i+n-1]-c[i];
            if (result>temp){
                result= temp;
            }
        }


        cout << result << endl;


    }



}
