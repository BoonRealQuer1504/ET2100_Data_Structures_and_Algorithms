#include <bits/stdc++.h>
using namespace std;




struct Post{
    int f,p;
    string s;
    bool isSpecial;
};



bool Compare(const Post&a , const Post&b){
    if (a.isSpecial != b.isSpecial){
        return a.isSpecial> b.isSpecial;
    }

    return a.p > b.p;
}


int main() {
	int n,m; cin >> n>>m;
    unordered_map<int, bool> specialFriends;
    for (int i = 0; i < n; i++) {
        int id; cin >> id;
        specialFriends[id] = true;
    }

    vector<Post> feed;
    for (int i=0;i<m;i++){
        int f,p;
        string s;
        cin >> f>>p>>s;
        bool special = (specialFriends.find(f)!= specialFriends.end());
        feed.push_back({f, p, s, special});
    }


    sort(feed.begin(), feed.end(), Compare);
    for (const auto &post:feed){
        cout << post.s<< endl;
    }



}
