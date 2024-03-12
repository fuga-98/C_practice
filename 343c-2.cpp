#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

bool check_shinbunshi(ll n){
    string t = to_string(n);
    bool shinbunshi = true;
    rep(i, t.size() / 2){
        if (t[i] != t[t.size() -1 - i]){
            shinbunshi = false;
            break;
        }
    }
    return shinbunshi;
}
bool check_factorial(ll n){
    ll croot = cbrt(n);
    return n == pow(croot,3);
}

int main(){
    ll n;
    cin >> n;
    ll ans= -1;
    for(ll i = 1; pow(i,3) <= n; i++){
        ll cube = pow(i,3);
        if(check_shinbunshi(cube)){
            ans = cube;
        }
    }
    cout << ans << endl;
    return  0;
}