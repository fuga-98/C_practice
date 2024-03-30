#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

//前から見ていって2以上の数が出たらそいつが答え
char solve(string s,ll k){
    //100以上はない
    ll point_not1 = 200;
    char not1 = 'a';
    rep(i,s.size()){
        if(s[i] == '1')continue;
        point_not1 = (ll)i + 1;
        not1 = s[i]; 
        break;
    }
    return (k  >= point_not1) ? not1 : '1';
}
int main(){
    string s;
    ll k;
    cin >> s >> k;
    cout << solve(s,k) << endl;    
    return  0;
}