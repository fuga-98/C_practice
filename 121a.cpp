#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int H,W,h,w;
    cin >> H >> W >> h >> w;
    int ans = (H - h) * (W -w);
    cout << ans <<endl;
    return  0;
}