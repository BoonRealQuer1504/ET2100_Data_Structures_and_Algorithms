#include <bits/stdc++.h>
using namespace std;
#include <queue> ;

int largestCommonElement(vector<int>& arr1, vector<int>& arr2) {
    int iDx1=0, iDx2=0;
    int result=-1;
    while(iDx1 < arr1.size() and iDx2 < arr2.size()){
        if (arr1[iDx1]==arr2[iDx2]){
            if (arr1[iDx1]> result){
                result = arr1[iDx1];
            }
            
            iDx1++;
            iDx2++;
        }
        
        else if (arr1[iDx1]> arr2[iDx2]){
            iDx2++;
        }
        
        else {
            iDx1++;
        }
        
        
        
    } 
    return result;
    
    
}



int main() {
    int a,b; cin >> a>>b;
    vector<int> arr1(a), arr2(b);
    for (int i=0;i<a;i++){
        cin >> arr1[i];
    }

    for (int i=0;i<b;i++){
        cin >> arr2[i];
    }

    cout << largestCommonElement(arr1, arr2)<< endl;


}