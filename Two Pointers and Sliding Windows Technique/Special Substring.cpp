#include <bits/stdc++.h>
using namespace std;


bool valid(unordered_map<char,int> mp){
    for (auto&p:mp){
        if (p.second> p.first-'a'+1){
            return false;
        }

    }
    return true;
}



int solve(string &s){
    int n=s.length();
    unordered_map<char,int> mp;
    int left=0, max_len=0;
    for (int right=0;right<n;right++){
        mp[s[right]]++;

        while (!valid(mp)){
            mp[s[left]]--;
            if (mp[s[left]]==0){
                mp.erase(s[left]);
            }

            left++;
        }





        max_len = max(max_len, right-left+1);
    }

    return max_len;
}

int main() {
	int t; cin >> t;
    while(t--){
        int n; cin >> n; string s;
        cin >> s;
        cout << solve(s)<< endl;
    }


}
