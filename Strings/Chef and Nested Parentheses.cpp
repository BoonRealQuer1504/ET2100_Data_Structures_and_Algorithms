#include<bits/stdc++.h>
using namespace std;
int maxNestingDepth(string &s){
    int count =0;
    int maxDepth=0;
    for (int i=0;i<s.length();i++){
        if (s[i]=='('){
            count++;
            maxDepth=max(maxDepth,count);
        }

        else if (s[i]==')'){
            count--;
        }
    }

    return maxDepth;
}



int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        cout << maxNestingDepth(s)<< endl;

    }
}