#include <iostream>
#include <deque>
using namespace std;

int main() {
    int t; cin >> t; while(t--){
        int n; cin >> n;
        string s;
        cin >>s;
        deque<char>result;
        int l = 0, r = n - 1;
        bool alice = true;
        while(l<=r){
            if(alice){
                char c= s[l++];
                if (c=='0') result.push_front(c);
                else result.push_back(c); 
            }
            else{
                char c= s[r--];
                if (c=='1') result.push_front(c);
                else result.push_back(c);
            }
            alice=!alice;   
        }

        for (char x : result) {
            cout << x ;      
        }
        cout << endl;
    }
}