#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, target; cin >> n>> target;
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int count_disc = INT16_MAX;
        for (int i=0;i<n;i++){
            int sum=target;
            int count=0;
            int iDx=i;
            while(iDx<n){
                if (sum < arr[iDx]){
                    iDx++;
                }

                else if (sum == arr[iDx]){
                    count++;
                    if (count< count_disc){
                        count_disc=count;
                    }

                    break;
                }

                else {
                    sum -=arr[iDx];
                    count++;
                    iDx++;
                }
            }
        }

        if (count_disc== INT16_MAX) cout << -1<< endl;
        else cout << count_disc<< endl;
    }
    return 0;
}
