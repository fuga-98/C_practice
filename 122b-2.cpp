#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    string S;
    cin >> S;
    int count = 0;
    int ans = 0;
    string acgt = "ACGT";
    rep(i,S.size()){
        if(acgt.find(S[i]) != string ::npos){
            count++;
            ans = count > ans ? count : ans;
        }else{count =0;}
    }
    cout << ans << endl;
    return  0;
}