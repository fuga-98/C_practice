#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)

int main(){
    int N;
    cin >> N;
    rep(i,2 * N + 1){
        int a = i % 2 == 0 ? 1 : 0;
        cout << a;
    }
    cout << endl;
    return  0;
}