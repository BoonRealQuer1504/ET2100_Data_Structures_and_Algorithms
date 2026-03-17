#include<bits/stdc++.h>
using namespace std;



int romanToInt(string &s){
    int sum =0;
    unordered_map<char, int> val = {
        {'I',1}, {'V',5}, {'X',10},
        {'L',50}, {'C',100},
        {'D',500}, {'M',1000}
    };
    for (int i=0;i<s.length();i++){
        if(i<s.length()-1 and val[s[i]]< val[s[i+1]]){
            sum-=val[s[i]];

        }

        else {
            sum+=val[s[i]];
        }
    }

    return sum;
}

int main(){
    
        string s; cin >> s;

        cout << romanToInt(s)<< endl;
    
}