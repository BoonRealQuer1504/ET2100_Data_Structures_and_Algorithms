#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, value; cin >> n >> value;
    vector<int> arr(n);
    for (int i=0;i< n;i++){
        cin >> arr[i];
    }

    int k_sum=0;
    for (int i=0;i<=value;i++){
        int begin=i;
        int end=value-i;
        int temp=0;
        for (int j=0;j<begin;j++){
            temp+=arr[j];
        }


        for (int j=n-1;j>=n-1-end+1;j--){
            temp+=arr[j];
        }


        if (temp>k_sum){
            k_sum=temp;
        }



    }


    cout << k_sum<< endl;



}
