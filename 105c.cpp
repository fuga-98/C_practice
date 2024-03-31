#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

string keisan(int num ,int div){
    if(num == 0)return "";
    int rem = num % div;
    int next = num / div;
    if(rem < 0){
        rem += abs(div);
        //商の調整。余りが負の数の時、商を増やす必要がある。
        next++;
    }
    return keisan(next,div) + to_string(rem);
}
string solve(int n){
    string ans =  keisan(n,-2);
    if(ans =="")ans = "0";
    return ans;
}


int main(){
    int n;
    cin >> n;
    cout << solve(n)<< endl;
    return  0;
}