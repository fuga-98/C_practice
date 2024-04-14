#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;
string solve(string s,string t){
    int count = 0;
    while(count < s.length()){
        if(s == t){
            return "Yes";
        }
        char last = s.back();
        s.pop_back();
        s = last + s;
        count++;
    }
    return "No";
}
int main(){
    string s,t;
    cin >> s >> t;
    cout << solve(s,t) << endl;
    return  0;
}