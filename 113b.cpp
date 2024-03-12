#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int t,a;
    cin >> t>>a;
    double min = 100000;
    int ans;
    rep(i,n){
        int h;
        cin >> h;
        double degree = t - h*0.006;
        double diff = abs(degree - a);
        if(diff  < min){
            ans = i + 1;
            min = diff; 
        } 
    }
    cout << ans << endl;
    return  0;
}