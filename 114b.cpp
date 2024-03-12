#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    string s;
    cin >> s;
    const int love = 753;
    int ans = 1000;
    rep(i,s.size()){
        int target = stoi(s.substr(i,3));
        if(target < 100)continue;
        int diff = abs(love - target);
        if(diff < ans) ans = diff;
    }
    cout << ans << endl;
    return  0;
}