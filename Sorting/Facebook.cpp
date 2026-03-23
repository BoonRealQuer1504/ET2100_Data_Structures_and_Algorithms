#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int iDx=0, maxLikes=0;

        for (int i=0;i<n;i++){
            if (maxLikes<a[i]){
                maxLikes=a[i];
                iDx=i;
            }
        }

        for (int i=0;i<n;i++){
            if (a[i]==maxLikes and b[i]>b[iDx]){
                iDx=i;
            }
        }

        cout << iDx +1<< endl;
    }

}
