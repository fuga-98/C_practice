#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int d;
    cin >> d;
    string ans ;
    if(d == 25){
        ans = "Christmas";
    }else if (d == 24){
        ans = "Christmas Eve";
    }else if(d == 23){
        ans = "Christmas Eve Eve";
    }else{
        ans = "Christmas Eve Eve Eve";
    }
    cout << ans << endl;
    return  0;
}