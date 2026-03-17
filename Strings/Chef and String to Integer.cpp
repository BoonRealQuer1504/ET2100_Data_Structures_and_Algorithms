#include <bits/stdc++.h>
using namespace std;


int myAtoi(string &s){
    int i=0, n=s.size();
    while (i < n && s[i] == ' ') i++;

    int sign=1;
    if(i<n and (s[i]=='+' or s[i]=='-')){
        if (s[i] == '-') sign = -1;
        i++;
    }

    long long result=0;
    while(i<n and isdigit(s[i])){
        int digit=s[i]-'0';
        if (result > (INT_MAX-digit)/10){
            return sign ==1 ? INT_MAX:INT_MIN;
        }
        
        result= result*10+digit;
        i++;
    }

    return sign*result;
}



int main() {
	int t; cin >> t; while(t--){
	    string s; cin >> s;
	    cout << myAtoi(s)<< endl;
	}

}
