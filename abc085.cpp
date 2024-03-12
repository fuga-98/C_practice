#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int N,Y;
    cin >> N >> Y;
    int a= -1,b=-1,c=-1;
    bool flag = false;
    rep(i,N + 1){
        rep(j,N + 1 - i){
            int m = 10000*i + 5000*j + 1000*(N - i - j);
            if(m==Y){
                a=i,b=j,c =N-i-j;
                flag = true;
                break;
            }
            if(flag == true) break;
        }
    }
    cout << a <<" " << b << " " << c << endl;
	return 0;
}