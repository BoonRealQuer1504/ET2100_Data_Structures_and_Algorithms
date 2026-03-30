#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
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
        if (arr[i]==1) count++;
        for (int j=i+1;j<n;j++){
            if (i==0){
                if (prefix[j]==j+1) count++;
            }

            else {
                if (prefix[j]-prefix[i-1]==(j-i+1)) count++;
            }
        }
    }

    cout << count << endl;
    

    



}
