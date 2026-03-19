#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n; 
	int arr[n];
	for (int i=0;i<n;i++){
	    cin >> arr[i];
	}
	
	int lar= arr[0], sma=arr[0];
	for (int i=0;i<n;i++){
	    if (arr[i]>lar){
	        lar = arr[i];
	    }
	    
	    else if (arr[i]<sma){
	        sma=arr[i];
	    }
	}
	
	cout << sma <<' '<< lar;

}
