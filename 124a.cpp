#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int A,B;
    cin >> A >> B;
    int sum;
    rep(i,2){
        if(A > B){
            sum+= A;
            A--;
        }else{
            sum += B;
            B--;
        }
    }
    cout << sum << endl;
    return  0;
}