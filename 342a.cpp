#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;
int serch(string s, char target){
    int at;
    rep(i,p.size()){
        if(p[i] == target){
            at = i;
            break;
        }        
    }
    return at;
}

int main(){
    string s;
    cin >> s;
    int ans = 1;
    char c = s[0];
    //最初の一文字目が仲間はずれだった場合、cを三文字目にする
    if(s[1] != c) c = s[2];
    rep(i,s.size()){
        if(i == 0)continue;
        if(c == s[i])continue;
        ans = i + 1;
    }
    cout << ans <<endl;
    return  0;
}