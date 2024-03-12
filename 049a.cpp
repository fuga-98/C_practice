#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    char t;
    cin >> t;
    string ans = (t =='a' || t =='i' || t =='u' || t =='e' || t =='o') ? "vowel" : "consonant";
    cout << ans << endl;
}