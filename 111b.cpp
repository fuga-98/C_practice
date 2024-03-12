#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    rep1(i,9){
        int same = 111 *i;
        ans = same;
        if(same >= n) break;
    }
    cout << ans << endl;
    return  0;
}