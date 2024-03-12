#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int n;
    cin >> n;
    char last = '1';
    set<string> words;
    string ans = "Yes";
    for(int  i; i < n ; i++){
        string s;
        cin >> s;
        if(last =='1'){
            last = s.back();
            words.insert(s);
            continue;
        }
        if(words.count(s) || last != s[0]){
            ans = "No";
            break;
        }
        words.insert(s);
        last= s.back();
    }
    cout << ans << endl;
    return  0;
}