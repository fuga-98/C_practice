#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;
string solve(string s){
    if(s[0] != 'A')return "WA";
    //後ろから三文字目はどこか
    size_t length = (s.length() - 3 + 1) -2 +1;
    string slice = s.substr(2,length);
    int c_c = 0;
    rep(i,slice.size()){
        if(slice[i] != 'C')continue;
        c_c++;
    }
    if(c_c != 1)return "WA";
    rep(i,s.size()){
        if(!isupper(s[i]))continue;
        if(s[i] == 'A' || s[i] == 'C')continue;
        return "WA";
    }
    return "AC";
}

int main(){
    string s;
    cin >> s;
    cout << solve(s) << endl;
    return  0;
}