#include <bits/stdc++.h>
using namespace std;
#include<stack>
int main() {
	int t; cin >> t; while(t--){
        int n; cin >> n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }
        long long maxArea=0;
        stack<int> st;


        for (int i=0;i<=n;i++){
            int h= (i==n) ? 0 : arr[i];
            while(!st.empty() and h < arr[st.top()]){
                int height = arr[st.top()];
                st.pop();

                int width;
                if (st.empty()){
                    width =i;
                }

                else {
                    width = i-1-st.top();
                }

                maxArea = max(maxArea, 1LL* height*width);
            }

            st.push(i);
        }


        cout << maxArea<< endl;

    }

}
