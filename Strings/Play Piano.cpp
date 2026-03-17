#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--){
	    string s; cin >> s;
	    bool temp=true;
	    for (int i=0;i<s.length();i+=2){
	        if(s[i]==s[i+1]){
	            temp=false;
	            break;
	        }
	    }
	    
	    if(temp) cout << "YES\n";
	    else cout << "NO\n";
	}

}
