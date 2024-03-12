#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int H,W;
    cin >> H >> W;
    vector<vector<char>> bits(H,vector<char>(W));
    rep(y,H){
        rep(x,W){
            string a;
            cin >>  bits.at(y).at(x) ;
        }
    }
    vector<int> delete_row(H);
    vector<int> delete_colmn(W);
    rep(y,H){
        int count=0;
        rep(x,W){
            if(bits[y][x]=='.')count++;
        }
        if(count==W){
            delete_row[y] = 1;
        }
    }
    rep(x,W){
        int count=0;
        rep(y,H){
            if(bits[y][x]=='.')count++;
        }
        if(count==H){
            delete_colmn[x] = 1;
        }
    }
    rep(y,H){
        int printed = 0;
        rep(x,W ){
            if(delete_row[y] ==1 || delete_colmn[x]==1) continue;
            cout << bits[y][x];
            printed++;
        }
        if(printed > 0) cout << endl;
    }
    return 0;
}