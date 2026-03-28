#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int contiguous = 0;
    int length=0, iter=0;
    
    for (int i=0;i<n;i++){
        if (arr[i]==0){
            length ++;
            if (length>contiguous){
                contiguous= length;
                iter =i;
            }
        }

        else{
            length=0;
        }
    }
    
    int start_index = iter - contiguous + 1;
    for (int i=iter;i>=start_index;i--){
        arr[i]=1;
    }


    int result=0, temp=0;
    for (int i=0;i<n;i++){
        if (arr[i]==1){
            temp++;
            if (temp>result){
                result = temp;
            }
        }

        else {
            temp=0;
        }
    }

    cout << result << endl;



}
