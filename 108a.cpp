#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int k;
    cin >> k;
    int even = k / 2;
    int odd = k/2 + k % 2;
    int ans = even * odd;
    cout << ans << endl;
    return  0;
}