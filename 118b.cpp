#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int n,m;
    cin >> n >> m;
    //nに初期化
    vector<int> foods(m);
    int ans = 0;
    rep(i,n){
        int k;
        cin >> k;
        rep(j,k){
            int target;
            cin >> target;
            foods[target - 1]++;
        }
    }
    rep(i,m){
        if(foods[i] == n) ans++;
    }
    cout << ans << endl;
    return  0;
}