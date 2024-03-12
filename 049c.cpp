#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string S;
    cin >> S;
    reverse(S.begin(),S.end());
    size_t point = 0;
    while(point  < S.size()){
        string target = S.substr(point,5);
        if(target== "maerd" || target == "esare"){
            point += 5;
            continue;
        }
        target = S.substr(point,6);
        if(target == "resare"){
            point += 6;
            continue;
        }
        target = S.substr(point,7);
        if(target == "remaerd"){
            point += 7;
            continue;
        }
        break;
    }
    string ans = (S.size() == point) ?"YES":"NO"; 
    cout << ans << endl;
    return 0;
}