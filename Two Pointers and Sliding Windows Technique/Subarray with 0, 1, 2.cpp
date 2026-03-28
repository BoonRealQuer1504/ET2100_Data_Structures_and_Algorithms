#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int count =0;
    int cnt[3]= {0,0,0};
    int L =0, distinct = 0;
    for (int R=0;R<n;R++){
        if (cnt[arr[R]] == 0) distinct++;
        cnt[arr[R]]++;
        while(distinct==3){
            cnt[arr[L]]--;
            if (cnt[arr[L]]==0){
                distinct--;
            }

            L++;
        }

        count+=L;

    }


    cout << count << endl;



}
