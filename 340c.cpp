#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

map<ll,ll> calc;

ll f(ll n){
    if(n == 1)
        return 0;
    //マップにnがあればそっちを返す
    if(calc[n] > 0)
        return calc[n];
    ll result =   n + f(n/2) + f((n+1)/2);
    calc[n] = result;
    return result;
}

int main(){
    ll N;
    cin >> N;
    
    cout << f(N)<< endl;
    
    return  0;
}