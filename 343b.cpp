#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int n;
    cin >> n;  
    rep1(i,n){
        rep1(j,n){
            int a;
            cin >> a;
            if(a == 1) cout << j << " ";
        }
        cout << endl;
    }
    return  0;
}