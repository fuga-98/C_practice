#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int N;
    cin >> N;
    int max= 0;
    int count = 0;
    rep(i,N){
        int a;
        cin >> a;
        if(a >= max){
            max = a;
            count++;
        }
    }
    cout << count << endl;
    return  0;
}