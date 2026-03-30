#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n>> k;
    vector<int> arr(n), prefix(n);
    for (int i=0;i<n;i++){
        cin >> arr[i];
        if (i==0){
            prefix[i]=arr[i];
        }

        else{
            prefix[i]=prefix[i-1]+arr[i];
        }
    }
    int count=0;


    for (int i=0;i<n;i++){
        if (arr[i]==k) count++;
        for (int j=i+1;j<n;j++){
            if (i==0){
                if (prefix[j]==k) count++;
            }

            else {
                if (prefix[j]-prefix[i-1]==k) count++;
            }
        }
    }

    cout << count << endl;
    

    



}
