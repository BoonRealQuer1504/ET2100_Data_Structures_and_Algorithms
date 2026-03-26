#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--){
        string s; cin >> s;
        int n=s.length();
        vector<bool> eaten(n,false);
        int mongooses=0;
        for (int i=0;i<n;i++){
            if (s[i]=='m'){
                mongooses++;
                if (s[i-1]=='s' and i>0 and !eaten[i-1]){
                    eaten[i-1]=true;
                }

                else if (i<n-1 and s[i+1]=='s' and !eaten[i+1]){
                    eaten[i+1]=true;
                }
            }

        }


        int snakes=0;
        for (int i=0;i<n;i++){
            if (s[i]=='s' and eaten[i]==false){
                snakes++;
            }
        }

        if (snakes > mongooses) {
            cout << "snakes" << endl;
        } else if (mongooses > snakes) {
            cout << "mongooses" << endl;
        } else {
            cout << "tie" << endl;
        }
    }

}
