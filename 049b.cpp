#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int H,W;
    cin >> H >> W;
    vector<vector<char>> dots(H,vector<char>(W));
    rep(y,H){
        rep(x,W){
            cin >> dots[y][x];
        }
    }
    rep(y, H){
        rep(x,W){
            cout << dots[y][x];
        }
        cout << endl;
        rep(x,W){
            cout << dots[y][x];
        }
        cout << endl;
    }
}