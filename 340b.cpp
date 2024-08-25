#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;


int main(){
    int times;
    cin >> times;
    vector<int> vec(0);
    rep(i,times){
        int order;
        int num;
        cin >> order >> num;
        if(order == 1){
            vec.push_back(num);
        }else if (order == 2){
            int target = vec.size() - num;
            cout << vec[target] << endl;
        }
    }
    return  0;
}