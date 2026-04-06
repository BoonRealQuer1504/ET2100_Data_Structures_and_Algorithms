#include <bits/stdc++.h>
using namespace std;
bool check(int arr[] ,int n, int c, int d){
    int count =0;
    int last_pos = arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]-last_pos>=d){
            count++;
            last_pos=arr[i];
        }

        if (count>=c){
            return true;
        }


    }

    return false;
}

int binary_search(int arr[], int n, int c){
    sort(arr, arr+n);
    int left =0, right = arr[n-1]-arr[0];
    int ans=0;
    while(left<=right){
        int mid = left + (right-left)/2;
        if (check(arr,n,c,mid)){    
            ans = mid;
            left = mid+1;
        }

        else{
            right = mid-1;

        }
    }


    return ans;
}






int main() {
	int n, value; cin >> n >> value;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << binary_search(arr,n,value)<< endl;






}
