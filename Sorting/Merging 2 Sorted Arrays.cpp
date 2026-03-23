#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n;
    vector<int> arr1(n);
    for (int i=0;i<n;i++){
        cin >> arr1[i];
    }


    cin >> m;
    vector<int> arr2(m);
    for (int i=0;i<m;i++){
        cin >> arr2[i];
    }


    vector<int> result(n+m);

    int idx1=0, idx2=0, idx=0;

    while (idx1 < n and idx2 < m){
        if (arr1[idx1]< arr2[idx2]){
            result[idx]=arr1[idx1];
            idx1++;
            idx++;
        }

        else {
            result[idx]=arr2[idx2];
            idx2++;
            idx++;
        }
    }


    while(idx1< n){
        result[idx]=arr1[idx1];
        idx1++;
        idx++;
    }

    while(idx2< m){
        result[idx]=arr2[idx2];
        idx2++;
        idx++;
    }


    for (int i=0;i<n+m;i++){
        cout << result[i]<< ' ';
    }

}
