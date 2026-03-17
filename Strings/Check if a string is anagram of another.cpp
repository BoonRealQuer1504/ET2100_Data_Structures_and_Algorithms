#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s,r; cin >> s>>r;
        unordered_map<char,int> mp;
        bool check=true;
        for (char c: s){
            mp[c]++;
        }

        for (char c: r){
            mp[c]--;
        }

        for (auto&p: mp){
            if (p.second!=0){
                check=false;
                break;
            }
        }


        if(check) cout << "YES" << endl;
        else cout << "NO"<< endl;
    }
}