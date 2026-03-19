#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; char c; int k;
    cin >> s>>c>>k;
    int count =0;
    for (int i=0;i<s.length();i++){
        if (s[i]==c){
            count++;
            if (count==k){
                cout << i<< endl;
                return 0;
            }
        }
    }
    
    cout << -1<<endl;
return 0;

}
