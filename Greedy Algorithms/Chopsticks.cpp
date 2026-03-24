#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n>>d;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    int i=0,coutn=0;
    while(i<n-1){
        if (arr[i+1]-arr[i]<=d){
            coutn++;
            i+=2;
        }

        else {
            i+=1;
        }
    }

    cout << coutn<< endl;
}