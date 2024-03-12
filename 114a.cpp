#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int x;
    cin >> x;
    string ans = (x == 7 || x  == 5 || x == 3) ? "YES" : "NO";
    cout << ans << endl;
    return  0;
}