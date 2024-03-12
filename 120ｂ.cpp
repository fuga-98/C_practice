#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int a,b,k;
    cin >> a >> b >> k;
    vector<int> divisor(101);
    int point = 0;
    rep1(i,100){
        if(a % i == 0 && b % i == 0){
            divisor[point] = i;
            point++;
        }
    }
    int back_number = point - k;
    cout << divisor[back_number] << endl;
    return  0;
}