#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, size; cin >> n>> size;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int max_sum=0;
    for (int i=0;i<=n-size;i++){
        int temp =0;
        for (int j=0;j<size;j++){
            temp+=arr[i+j];
        }
        if (temp>max_sum){
            max_sum=temp;
        }
    }

    cout << max_sum;


}
