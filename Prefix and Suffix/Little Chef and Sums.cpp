#include <bits/stdc++.h>
using namespace std;





int main() {
	int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        vector<int> arr(n), prefix(n) , suffix(n);
        for (int i=0;i<n;i++){
            cin >> arr[i];
            if (i==0){
                prefix[i]=arr[i];
            }

            else{
                prefix[i]=prefix[i-1]+arr[i];
            }
        }
        
        

        for (int i=0;i<n;i++){
            if (i==0){
                suffix[i]= prefix[n-i-1];
            }

            else{
                suffix[i]= suffix[i-1]- arr[i-1];
            }
        }
        int min_value= INT16_MAX, min_iter=0;
        for (int i=0;i<n;i++){
            if ((prefix[i]+suffix[i]) < min_value ){
                min_iter=i;
                min_value= prefix[i]+suffix[i];
            }
        }


        cout << min_iter+1<< endl;

    
    }
    

    



}
