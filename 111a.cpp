#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    string n;
    cin >> n;
    rep(i,n.size()){
        if(n[i] == '1')n[i] = '9';
        else if(n[i] == '9')n[i] = '1';
    }
    cout << n << endl;
    return  0;
}