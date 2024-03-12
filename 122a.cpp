#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    char b;
    cin >> b;
    char ans;
    switch (b)
    {
    case 'A'/* constant-expression */:
        /* code */
        ans = 'T';
        break;
    case 'T':
        ans = 'A';
        break;
    case 'C':
        ans = 'G';
        break;
    case 'G':
        ans ='C';
        break;
    default:
        break;
    }
    cout << ans << endl;
    return  0;
}