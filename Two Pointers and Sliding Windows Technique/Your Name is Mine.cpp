#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;


        unordered_map<char, int> mp;
        int n1= s1.length(), n2 = s2.length();
        if (n1<=n2){
           for (char c:s1){
                mp[c]++;
            }


            for (char c: s2){
                if (mp.count(c)){
                    mp[c]--;
                }
            } 
        }


        else {
            for (char c:s2){
                mp[c]++;
            }


            for (char c: s1){
                if (mp.count(c)){
                    mp[c]--;
                }
            }
        }
        


        bool valid = true;
        for (auto &p: mp){
            if (p.second>0){
                valid = false;
                break;
            }
        }


        if (valid) cout << "YES "<< endl;
        else cout << "NO"<< endl;


    }



}
