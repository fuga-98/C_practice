#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    string s;
    int ans=0;
    cin >> s;
    rep(i,s.length()){
        if (s[i] == '+') ans++;
        else ans--;
    }
    cout << ans << endl;
    return  0;
}