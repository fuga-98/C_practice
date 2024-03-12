#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    //辺をabcdと置く
    int ab_x = x2 -x1;
    int ab_y = y2 -y1;
    int x3,y3,x4,y4;
    x3 = x2 + ab_y;
    y3 = y2 - ab_x;
    x4 = x3  - ab_x;
    y4 = y3 - ab_y;
    cout << x3 << ' '<< y3 << ' '<< x4 << ' ' << y4 <<endl;    
    return  0;
}