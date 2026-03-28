#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}


bool validPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] == s[right]) {
            left++;
            right--;
        } else {
            // Khi gặp ký tự khác nhau, thử xóa trái HOẶC xóa phải
            return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
        }
    }

    return true; 
}


int main() {
	int n; cin >> n;
    string s;
    cin >> s;


    if (validPalindrome(s)) cout << "YES"<< endl;
    else cout << "NO"<< endl;





}
