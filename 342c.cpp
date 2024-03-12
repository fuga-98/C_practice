#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;
int change(string &s, int target, char c){
    rep(i,s.size()){
        char t = target + 'a';
        if(s[i] == t){
            s[i] = c;
        }
    }
    return 0;
}
int main(){
    int n,q;
    string s;
    cin >> n >> s >> q;
    vector<vector<char>> vec(q,vector<char>(2));
    rep(i,q){
        cin >> vec[i][0] >> vec[i][1];
    }
    // rep(i,q){
    //     char t =vec[i][1];
    //     for(int j = q; j > i; j--){
    //         if(vec[j][0] != t) continue;
    //         vec[i][1] = vec[j][1];
    //         break;
    //     }
    // }
    vector<char> cv(26);
    rep(i,q){
        int cn = vec[i][0] - 'a';
        cv[cn] = vec[i][1];
    }
    rep(i,cv.size()){
        change(s,i,cv[i]);
    }
    cout << s <<endl;
    return  0;
}