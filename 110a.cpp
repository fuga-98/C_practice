#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int max = (a > b) ? ((a > c) ? a : c): ((b > c) ? b : c);
    int ans = a + b + c + max *  9;
    cout << ans << endl; 
    return  0;
}