#include <bits/stdc++.h>
using namespace std;



int longestUniqueSubstring(string &s){
    int n = s.length();
    vector<int> last(256,-1);
    int max_len=0;
    int left=0;
    for (int right=0;right<n;right++){
        if (last[s[right]]>=left){
            left = last[s[right]] + 1;
        }


        last[s[right]]=right;
        max_len = max (max_len, right-left+1);
    }


    return max_len;
}



int main() {
	string s; cin >> s;
    cout << longestUniqueSubstring(s) << endl;


}
