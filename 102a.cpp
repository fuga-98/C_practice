#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;
int solve( int n){
    if(n % 2 == 0)return n;
    return n * 2;
}

int main(){
    int n;
    cin >> n;
    cout << solve(n) << endl;
    return  0;
}