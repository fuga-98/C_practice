#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;
int solve(set<int> a){
    return *a.rbegin() - *a.begin();
}
int main(){
    int n;
    set<int> a;
    cin >> n;
    rep(i,n){
        int t;
        cin >> t;
        a.insert(t);
    }
    cout << solve(a) << endl;
    return  0;
}