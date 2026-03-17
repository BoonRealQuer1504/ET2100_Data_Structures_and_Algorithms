#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, m; cin >> n>>m ;
    vector<int> a(n), b(m), result;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }

    for (int i=0;i<m; i++){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    while(i<n and j<m){
        if (a[i]<b[i]) i++;
        else if (a[i]>b[i]) j++;
        else{
            result.push_back(a[i]);
            i++;
            j++;
        }
    }

    for (int x: result){
        cout << x<< " ";
    }
}