#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int serch(vector<int> p, int target){
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
    int n;
    cin >> n;
    vector<int> p(100);
    rep(i,n){
        cin >> p[i];
    }
    int q;
    cin >> q;
    rep(i,q){
        int a,b;
        cin >> a >> b;
        int ap = serch(p,a);
        int bp = serch(p,b);
        int ans = ap < bp ? a : b;
        cout << ans << endl;
    }
    return  0;
}