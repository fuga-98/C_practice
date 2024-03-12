#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;


int main(){
    ll s;
    cin >> s;
    ll a = s;
    set<int> history;
    //初項
    history.insert(a);
    int m = 1;

    while(true){
        m++;
        a = (a % 2 == 0) ? (a /2 ) : (a * 3) + 1;
        if(!history.count(a)){
            history.insert(a);
            continue;
        }
        break;
    }
    cout << m<< endl;
    return  0;
}
int calcm(int m, set<int> &history,int a){
    m++;
    a = (a % 2 == 0) ? (a /2 ) : (a * 3) + 1;
    if(!history.count(a)){
        history.insert(a);
        calcm(m,history,a);
    } else{
        return m;
    }
}