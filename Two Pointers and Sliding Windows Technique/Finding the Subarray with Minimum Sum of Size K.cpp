#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, size; cin >> n>> size;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int min_sum=INT16_MAX;
    for (int i=0;i<=n-size;i++){
        int temp =0;
        for (int j=0;j<size;j++){
            temp+=arr[i+j];
        }
        if (temp<min_sum){
            min_sum=temp;
        }
    }

    cout << min_sum;


}
