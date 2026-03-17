#include<iostream>
#include<queue>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n, k; cin >> n>> k;
        vector<int> arr(n);
        queue<int> necklace;
        for (int i=0;i<n;i++){
            cin >> arr[i];
            necklace.push(arr[i]);
        }
        
        for (int i=0;i<k;i++){
            int x= necklace.front();
            necklace.pop();
            necklace.push(x);
        }

        while(!necklace.empty()){
            cout << necklace.front()<<" ";
            necklace.pop();
        }

        cout << endl;

    }
}