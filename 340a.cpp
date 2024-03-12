#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int A,B,D;
    cin >> A >> B >> D;
    int t = A;
    while(t <= B){
        cout << t << ' ';
        t += D;
    }
    cout << endl;
}