#include<bits/stdc++.h>
using namespace std;
//count(max = K) = count(max ≤ K) - count(max ≤ K-1)
long long countMaxLE(vector<int>& arr, int x){
    long long count = 0;
    long long len = 0;

    for(int v : arr){
        if(v <= x){
            len++;
            count += len;
        }
        else{
            len = 0;
        }
    }

    return count;
}
int main(){
    int n, value; cin >> n>>value;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }

    cout << countMaxLE(a,value) - countMaxLE(a,value-1);

}