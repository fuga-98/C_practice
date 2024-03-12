#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep(i, n) for (int i = 1; i < (int)(n + 1); i++)

int main(){
    int A,B,T;
    cin >> A >>B >> T;
    int ans =  (T / A )* B;    
    cout << ans << endl;
    return  0;
}