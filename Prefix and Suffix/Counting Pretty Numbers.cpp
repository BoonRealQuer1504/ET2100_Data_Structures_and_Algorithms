#include <bits/stdc++.h>
using namespace std;


int countPretty(int n){
    if (n<0) return 0;
    long count = (n/10)*3;
    int rem = n%10;
    for (int i=0;i<=rem;i++){
        if (i==2 or i==3 or i==9){
            count++;
        }
    }

    return count;
}


int main() {
	int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;
        cout << countPretty(b)- countPretty(a-1)<< endl;
    }
    

    



}
