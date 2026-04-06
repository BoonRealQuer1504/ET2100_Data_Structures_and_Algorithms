#include <bits/stdc++.h>
using namespace std;





int findFirst(int value, int arr[], int n){
    int left=0, right = n-1 , res=-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if (arr[mid]==value){
            res = mid;
            right = mid -1;
        }

        else if (arr[mid] > value){
            right = mid-1;
        }

        else {
            left = mid+1;
        }
    }

    return res;
}



int findLast(int value, int arr[], int n){
    int left=0, right = n-1 , res=-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if (arr[mid]==value){
            res = mid;
            left = mid +1;
        }

        else if (arr[mid] > value){
            right = mid-1;
        }

        else {
            left = mid+1;
        }
    }

    return res;
}

int count(int value, int arr[], int n){
    int first = findFirst(value, arr, n);
    int last = findLast(value,arr,n);
    if (first == -1) return 0;
    return last - first+1;
}


int main() {
	int n, value; cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> value;

    cout << count(value,arr,n);




}
