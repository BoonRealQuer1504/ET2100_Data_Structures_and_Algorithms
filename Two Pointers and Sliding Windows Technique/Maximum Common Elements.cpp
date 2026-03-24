#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i=0;i<n;i++){
            cin >> a[i];
        }

        for (int i=0;i<n;i++){
            cin >> b[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int count =0;
        int iDx1=0, iDx2=0;
        while  (iDx1<n and iDx2<n){
            if (a[iDx1]==b[iDx2]){
                count++;
                iDx1++;
                iDx2++;
            }

            else if(a[iDx1]< b[iDx2]){
                iDx1++;
            }

            else{
                iDx2++;
            }


        }


        cout << count<< endl;
        

        

    }

}
