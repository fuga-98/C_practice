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
    rep(i,S.size()){
        switch (S[i])
        {
        case 'A'/* constant-expression */:
        case 'T':
        case 'C':
        case 'G':
            count++;
            if(count > ans)ans = count;
            break;
        default:
            count = 0;
            break;
        }
    }
    cout << ans << endl;
    return  0;
}