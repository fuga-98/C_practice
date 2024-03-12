#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    rep(i,N){
        cin >> A[i];
    }
    vector<int> S(N -1);
    vector<int> T(N -1);
    rep(i,N -1){
        cin >> S[i] >> T[i];
    }
    bool flag = true;
    while(flag){
        int check = 0;
        rep(i,N -1){
            long long times = A[i] / S[i];
            if(times > 0){
                A[i] -= S[i] * times;
                A[i + 1] += T[i] *times;
                check++;
            }
        }
        if(check == 0){
            flag = false;
        }
    }
    cout << A[N - 1] << endl;
    return  0;
}