#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main() {
    int t; cin >> t; while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        deque<int> temp;
        for (int i=0;i<n;i++){
            cin >> arr[i];
            temp.push_back(arr[i]);
        }

        int count=0;
        while(temp.size()>1){
            if (temp.front()==temp.back()){
                temp.pop_back();
                temp.pop_front();
                continue;
            }

            else{
                if (temp.back()>temp.front()){
                    int n=temp.back();
                    temp.pop_back();
                    temp.push_back(n-temp.front());
                    temp.push_back(temp.front());

                }

                else {
                    int n=temp.front();
                    temp.pop_front();
                    temp.push_front(n-temp.back());
                    temp.push_front(temp.back());

                }

                count++;
            }
        }

        cout << count<< endl;


    }
}