#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int count = 0;
    rep1(i,n){
        if(i % 2 == 0)continue;
        int div_count = 0;
        rep1(j,i){
            if(i % j == 0)div_count++;}
        if(div_count == 8) count++;
    }
    cout << count << endl;
    return  0;
}