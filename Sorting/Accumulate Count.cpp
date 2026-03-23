#include <iostream>
#include <vector>
#include <stack>

#include<algorithm>
using namespace std;



int main() {
    int n; cin >> n; 
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int k; cin >> k;
    sort(arr.begin(), arr.end());
    vector<int> result(k);
    for (int i=0;i<k;i++){
        int sum=0;
        for (int j=0;j<n;j++){
            if  (arr[j]<=i){
                sum +=1;
                result[i]=sum;
            }

            else {
                break;
            }
        }   
    }

    for (int i=0;i<result.size();i++){
        cout << result[i]<< ' ';
    }
}
