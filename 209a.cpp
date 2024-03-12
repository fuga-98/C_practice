#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int A,B;
    cin >> A >> B;
    int ans = B - A + 1  > 0 ? B - A +1 : 0; 
    cout << ans <<endl;
    return 0;
}