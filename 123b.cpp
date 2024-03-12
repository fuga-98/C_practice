#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int N;
    ll D;
    cin >> N >> D;
    ll d2 = D*D;
    int count = 0;
    rep(i,N){
        ll x,y;
        cin  >> x >> y;
        if(x*x + y*y <= d2)count++;
    }
    cout <<  count << endl;
    return  0;
}