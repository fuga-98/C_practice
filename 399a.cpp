#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int a,b,d;
    cin >> a >> b >> d;
    int x = a;
    while(x <= b){
        cout << x << ' ';
        x += d;
    }
    cout << endl;
    return  0;
}