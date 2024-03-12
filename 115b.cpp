#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int N;
    cin >> N;
    int max = 0;
    int sum = 0;
    rep(i,N){
        int p;
        cin >> p;
        if(p > max){
            max = p;
        }
        sum += p;
    }
    int ans = sum - (max / 2);
    cout <<  ans << endl;
    return  0;
}