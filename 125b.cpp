#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep(i, n) for (int i = 1; i < (int)(n + 1); i++)

int main(){
    int N;
    cin >> N;
    vector<int> V(N);
    vector<int> C(N);
    int sum = 0;
    rep(i,N){
        cin >> V[i];
    }
    rep(i,N){
        cin >> C[i];
    }
    rep(i,N){
        int diff = V[i] - C[i];
        if (diff > 0 ) sum += diff;
    }
    cout << sum << endl;
    return 0;
}