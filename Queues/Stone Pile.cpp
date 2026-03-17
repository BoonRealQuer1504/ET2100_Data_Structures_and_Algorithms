#include<iostream>
#include<queue>
using namespace std;

int main(){
    int t; cin >> t; while(t--){
        int n; cin >> n; 
        vector<int> arr(n);
        queue<int> deck;
        for (int i=0;i<n;i++){
            cin >> arr[i];
            deck.push(arr[i]);
        }
        int flag=1;
        while(deck.size()!=1){
            if (flag==1){
                int num = deck.front();
                deck.pop();
                deck.push(num);
                deck.pop();
                if (deck.size()==1) break;
                flag=0;
            }

            else{
                int num = deck.front();
                deck.pop();
                deck.push(num);
                num = deck.front();
                deck.pop();
                deck.push(num);
                deck.pop();
                if (deck.size()==1) break;
                flag=1;
            }
        }

        cout << flag << " "<< deck.front()<< endl;

        



    }
}