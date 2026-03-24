#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while(t--){
        int n,k; cin >> n>> k;
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }
        int value=0;
        for (int i=0;i<n-k+1;i++){
            int temp=0;
            for (int j=0;j<k;j++){
                temp+=arr[i+j];
            }

            if (temp>value){
                value=temp;
            }
        }


        cout << value << endl;

        

    }

}
