#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int a,b;
    cin >> a >> b;
    int ans = b % a == 0 ? b + a : b-a ;
    cout << ans << endl;
    return  0;
}