#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;
//練習用
int kitei_henkan(int a,int b){
    if(a == 0)return 0;
    int rem = abs(a % b);
    int next = a / b;
    return kitei_henkan(next,b)* 10 + rem; 
}
string keisan(int num){
    if(num == 0)return "";
    string zeroone = "";
    if(num % 2 != 0){
        num--;
        zeroone= "1";       
    }else{
        zeroone = "0" ;
    }
    return keisan(num/(-2)) + zeroone;
}
string solve(int n){
    //素直な実装
    string ans =  keisan(n);
    if(ans =="")ans = "0";
    return ans;
}


int main(){
    int n;
    cin >> n;
    cout << solve(n)<< endl;
    return  0;
}