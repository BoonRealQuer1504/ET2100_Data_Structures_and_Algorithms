#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, value;
	cin >> m >> value;
	int a[m];
	bool found=false;
	for (int i=0;i<m;i++){
	    cin >> a[i];
	}
	
	for (int i=0;i<m;i++){
	    if(value == a[i]){
	        found=true;
	        break;
	    }
	}
	
	if(found){
	    cout << "YES"<< endl;
	    
	}
	
	else cout << "NO"<< endl;

}
