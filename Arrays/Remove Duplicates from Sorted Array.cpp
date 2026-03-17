#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    vector<int> a(n);
    vector<int> result;
    int count=1;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if (i==0){
            result.push_back(a[i]);
        }
        else{
            if (a[i]!=a[i-1]){
                count++;
                result.push_back(a[i]);
            }
        }
    }

    cout << count << endl;
    for (int i=0;i<count;i++){
        cout << result[i]<< ' ';
    }


    




}
