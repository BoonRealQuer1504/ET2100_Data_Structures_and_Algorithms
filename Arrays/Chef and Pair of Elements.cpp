#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    bool found = false;
    int value; cin >> value;
    int pos1, pos2;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(a[i]+a[j]== value){
                pos1=i;
                pos2=j;
                found = true;
                break;
            }
        }


        if (found) break;
    }

    cout << pos1<< " "<< pos2;
}