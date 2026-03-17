#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--){
        int n; cin >> n;
        int arr[n], b[n];
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }

        for (int i=0;i<n;i++){
            cin >> b[i];
        }

        int max1=0, count1=0;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                count1++;
                if(count1>max1){
                    max1=count1;
                }
            }

            else {
                count1=0;
            }
        }


        int count=0, max=0;
        for(int i=0;i<n;i++){
            if(b[i]>0){
                count++;
                if(count>max){
                    max=count;
                }
            }

            else {
                count=0;
            }
        }

        if(max1>max) cout << "OM"<< endl;
        else if (max1==max) cout << "DRAW"<< endl;
        else cout << "ADDY"<< endl;

        
    }
    

}
