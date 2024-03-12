#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int,int>> pVec;
  for (int i = 0; i < N; i++){
    int a;
    int b;
    cin >> a >> b;
    //b,aで登録する
    pVec.push_back(make_pair(b,a));
  }
  sort(pVec.begin(),pVec.end());
  vector<pair<int,int>> ans;
  for (pair<int,int>x : pVec){
    //a,bの順で出力
    cout << x.second <<' '<< x.first <<endl;
  }
}