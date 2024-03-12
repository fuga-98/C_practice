#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int n;
    cin >> n;
    double jpy = 0;
    double btc = 0;
    rep(i,n){
        double money;
        string  type;
        cin >> money >> type;
        if(type=="BTC")btc += money;
        if(type =="JPY")jpy += money;
    }
    double ans = jpy + 380000 * btc;
    cout << ans << endl;
    return  0;
}