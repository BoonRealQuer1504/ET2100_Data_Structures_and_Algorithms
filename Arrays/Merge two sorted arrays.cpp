#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m; cin >> n>>m;
    vector<int> a(n), b(m);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }

    for (int i=0;i<m;i++){
        cin >> b[i];
    }


    vector<int> result;
    int iter1=0, iter2=0;
    while(iter1 < n and iter2 <m ){
        if (a[iter1]<b[iter2]){
            result.push_back(a[iter1]);
            iter1++;
        }

        else {
            result.push_back(b[iter2]);
            iter2++;
        }
    }


    while(iter1 < n){
        result.push_back(a[iter1]);
        iter1++;
    }

    while(iter2 < m){
        result.push_back(b[iter2]);
        iter2++;
    }


    for (int i=0;i<n+m;i++){
        cout << result[i]<< " ";
    }

}
