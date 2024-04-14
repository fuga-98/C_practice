#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int solve(vector<int> a){
    sort(a.begin(),a.end());
    return a[2] -a[0];
}
int main(){
    vector<int> a(3);
    cin >> a[0] >> a[1]>> a[2];
    cout << solve(a) << endl;
    return  0;
}