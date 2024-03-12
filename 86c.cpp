#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int n;
    cin >> n;
    ll nowt = 0;
    ll nowx = 0;
    ll nowy = 0;
    string ans ="Yes";
    rep(i,n){
        ll t,x,y;
        cin >> t >> x >> y;
        ll diff = abs(x - nowx) + abs(y - nowy);
        ll timeleft = t - nowt;
        if (timeleft < diff || (timeleft- diff) % 2 == 1){
            ans = "No";
            break;
        } 
        nowx = x;
        nowy  = y;
        nowt = t;
    }
    cout << ans << endl;
    return  0;
}