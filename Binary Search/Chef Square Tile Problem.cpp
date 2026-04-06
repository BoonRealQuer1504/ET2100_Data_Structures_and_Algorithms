#include <bits/stdc++.h>
using namespace std;



bool binary_search_sqrt(int n){
    if (n<0) return false;
    if (n==1) return true;
    int left =1, right = n;
    while(left<=right){
        int mid = left + (right-left)/2;
        int square = mid*mid;

        if (square == n){
            return true;
        }

        else if (square < n){
            left = mid+1;
        }

        else{
            right = mid -1;

        }
    }

    return false;

}



int main() {
	int n, sum=0; cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }

    if (binary_search_sqrt(sum)) cout << "YES";
    else cout << "NO";




}
