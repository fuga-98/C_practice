#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep(i, n) for (int i = 1; i < (int)(n + 1); i++)

int main(){
    int N,X;
    cin >> N >> X;
    int sum = 0;
    rep(i, N){
        int a;
        cin >> a;       
        sum += a;
    }
    int discount = N / 2;
    string ans = sum - discount > X ? "No" : "Yes";
    cout << ans << endl;
    return  0;
}