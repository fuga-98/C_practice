#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n + 1); i++)
typedef long long ll;

int main(){
    string a,b;
    cin >> a >> b;
    vector<ll> sta(26,-1);
    vector<ll> goal(26,-1);
    ll a_int,b_int;
    rep(i,a.size()){
        //↓が悪さしていた。こいつも記録しとかないといけなかった
        //if(a[i] == b[i]) continue;
        //文字を数値に
         a_int =a[i] - 'a';
         b_int = b[i] -'a';
        //文字が初期状態なら差を挿入
        if(sta[a_int] != -1 || goal[b_int]!= -1){
                if(sta[a_int] != b_int || goal[b_int] != a_int){
                cout << "No" << endl;
                return 0;
            }
        }else{
            sta[a_int] = b_int;
            goal[b_int] = a_int;
        }
    }
    cout << "Yes" << endl;
    return  0;
}