#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--){
	    string s; cin >> s;
	    unordered_map<char,int> count;
        for (char c: s){
            count[c]++;
        }
        int minPaint;
        if (count.size()==1){
            minPaint=0;
        }
        else{
            minPaint= INT16_MAX;
            for (auto& c:count){
                minPaint=min(c.second, minPaint); 
            }
        }
        

        cout << minPaint<< endl;
	}

}
