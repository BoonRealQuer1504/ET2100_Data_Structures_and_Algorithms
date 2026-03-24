#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int count1=0, count2=0;
        for (int i=0;i<s.length();i++){
            if (s[i]=='x') count1++;
            else count2++;
        }


        cout << min(count1, count2)<< endl;
    }
}