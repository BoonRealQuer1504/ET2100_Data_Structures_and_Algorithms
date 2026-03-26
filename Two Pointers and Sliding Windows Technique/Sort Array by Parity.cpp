#include <bits/stdc++.h>
using namespace std;
#include <queue> ;

void sortArrayByParity(vector<int>& nums) {
    vector<int> result;
    queue <int> temp;
    for (int i=0;i<nums.size();i++){
        if (nums[i]%2==1){
            result.push_back(nums[i]);
        }
        
        else{
            temp.push(nums[i]);
        }
    }
    
    while(temp.size()!=0){
        result.push_back(temp.front());
        temp.pop();
    }
    for (int i=0;i<nums.size();i++){
        nums[i]=result[i];
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    sortArrayByParity(nums);

    for (int i = 0; i < N; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}