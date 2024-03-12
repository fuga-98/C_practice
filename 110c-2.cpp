#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    string a,b;
    cin >> a >> b;
    vector<int> alph(26);
    vector<int> beta(26);
    string ans = "Yes";
    rep(i,26){
        int c1 = -1;
        int c2 = -1;
        bool flag = true;
        rep(j,a.size()){
            int a_int =a[i] - 'a';    
            if(i != a_int)continue;
            int b_int = b[i] -'a';
            if(c1 == -1 && c2 == -1){
                c1 = a_int;
                c2 = b_int;
            }

        }
        if(flag) break;
        rep()

        if(a[i] == b[i]) continue;
        //文字を数値に
        int a_int =a[i] - 'a';
        int b_int = b[i] -'a';
        int diff = a[i] -b[i];
        //文字が初期状態なら差を挿入
        if(alphabet[a_int] == 0 && alphabet[b_int]== 0){
            alphabet[a_int] = b_int;
            alphabet[b_int] = a_int;
        }else{
            if(alphabet[a_int] !=b_int || alphabet[b_int] != a_int){
                ans = "No";
                break;
            }
        }
    }
    rep(i,alphabet.size()){
        cout << alphabet[i] << endl;
    }
    cout << ans << endl;
    return  0;
}