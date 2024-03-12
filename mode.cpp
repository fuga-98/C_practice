#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int,int> A;
    int max = 0;
    int ans = 0;
    //計算量はO(NlogN)
    for (int i =0; i<N; i++){
        int a;
        cin >> a;
        if(A.count(a)){
            A[a]++;
        }else{
            A[a] = 1;
        }
        if (A[a] > max){
            max =A[a];
            ans = a;
        }
    }
    cout << ans <<' '<< max << endl;
}