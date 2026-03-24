#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m,h; cin >> n>>m>>h;
        int car[n];
        int outlet[m];
        for (int i=0;i<n;i++){
            cin >> car[i];
        }
        for (int i=0;i<m;i++){
            cin >> outlet[i];
        }


        sort(car,car+n, greater<int>());
        sort(outlet,outlet+m, greater<int>());
        int power =0;
        for (int i=0;i<min(n,m);i++){
            int temp= h*outlet[i];
            if (temp>car[i]){
                power+=car[i];
            }

            else{
                power+=temp;
            }

        
        }

        cout << power<< endl;
    }
}