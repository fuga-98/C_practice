#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int max=0;
    int sum = 0;
    rep(i,n){
        int l;
        cin >> l;
        if(l > max)max = l;
        sum+=l;
    }
    //sumには最大値も含まれている
    string ans = max < sum -max ? "Yes" : "No";
    cout << ans << endl;
    return  0;
}