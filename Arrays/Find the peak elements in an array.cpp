#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }


    for (int i=0;i<n;i++){
        if (i==0){
            if (a[i]>a[i+1]){
                cout << a[i]<< ' ';
            }
        }

        else if  (i==n-1){
            if (a[i]>a[i-1]){
                cout << a[i]<< ' ';
            }
        }

        else{
            if (a[i]> a[i-1] and a[i]> a[i+1]){
                cout << a[i]<< ' ';
            }
        }
    }

}
