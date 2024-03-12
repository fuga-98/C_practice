#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int N,M,X,Y;
    cin >> N >> M >> X >> Y;
    vector<int> x(N);
    vector<int> y(M);
    rep(i,N){
        int xs;
        cin >> xs;
        x[i] = xs;  
    }
    rep(i,M){
        int ys;
        cin >> ys;
        y[i] =  ys;
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    string ans = "War";
    for(int i = -100; i < 100; i++){
        if(i <= X || Y < i) continue;
        if(i <= x[N -1] || y[0] < i ) continue;
        ans = "No War";
    }
    cout << ans << endl;
    return  0;
}