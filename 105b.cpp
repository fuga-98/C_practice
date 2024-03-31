#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;
string solve(int N){
    const int c_p = 4;
    const int d_p = 7;
    string ans = "No";
    int C_sum = 0;
    while(C_sum <= N){
        if((N - C_sum) % d_p == 0){
            ans ="Yes";
            break;
        }
        C_sum += c_p;
    }
    return ans;
}
int main(){
    int N;
    cin >> N;
    cout << solve(N) << endl;
    return  0;
}