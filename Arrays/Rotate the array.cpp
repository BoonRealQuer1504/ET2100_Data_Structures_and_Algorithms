#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; 
    cin >> n>> k;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }

    while(k--){
        int temp = a[n-1];
        for (int i=0;i<n;i++){
            swap(temp,a[i]);
        }
    }

    for (int i=0;i<n;i++){
        cout << a[i]<< " ";
    }


}
