#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int N,M,C;
    cin >> N >> M >> C;
    vector<int> B(M);
    int count = 0;
    //配列としてBを受け取る
    rep(i,M){cin >> B[i];}
    rep(i,N){
        //入力を受け取り計算する
        int score = C;
        rep(i,M){
            int a;
            cin >> a;
            score += a * B[i];
        }
        if (score > 0){
            count++;
        }
    }
    cout << count << endl;
    return  0;
}