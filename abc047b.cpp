#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int H,W,N;
    cin >> H >> W >> N;
    vector<vector<int>> squrare(H,vector<int>(W));
    rep(i,N){
        int x,y,a;
        cin >> x >> y >> a;
        if(a==1){
            rep(j,H){
                rep(k,W){
                    if(j < x){
                       squrare.at(j).at(k)++;
                    }
                }
            }           
        }
        if(a==2){
            rep(j,H){
                rep(k,W){
                    if(j >= x){
                        squrare.at(j).at(k)++;
                    }
                }
            }           
        }
        if(a==3){
            rep(j,H){
                rep(k,W){
                    if(k < y){
                        squrare.at(j).at(k)++;
                    }
                }
            }           
        }
        if(a==4){
            rep(j,H){
                rep(k,W){
                    if(k >= y){
                        squrare.at(j).at(k)++;
                    }
                }
            }           
        }
    }
    int count=0;
    rep(i,H){
        rep(j,W){
            if (squrare.at(i).at(j) == 0)count++;
        }
    }
    cout << count << endl;
	return 0;
}