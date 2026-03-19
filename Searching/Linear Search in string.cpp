#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	char c; cin >> c;
	int found=-1;
	for (int i=0;i<s.length();i++){
	    if (c==s[i]){
	        found=i;
	        break;
	    }
	}
	
	cout << found;

}
