#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int n,t;
    cin >> n >> t;
    int min_c = 10000;
    rep(i,n){
        int c,time;
        cin >> c >>time ;
        if(time > t)continue;
        if(min_c > c){
            min_c = c;
        }
    }
    if(min_c == 10000){
        cout << "TLE" << endl;
    }else {
        cout << min_c << endl;
    }
    return  0;
}