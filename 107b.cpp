#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int H,W;
    cin >> H >> W;
    vector<vector<char>> bits(H,vector<char>(W));
    rep(y,H){
        rep(x,W){
            string a;
            cin >>  bits.at(y).at(x) ;
        }
    }
    //bool flag = true;
    //while(flag){
        rep(y,H){
            int count =0;
            rep(x,W){
                if (bits.at(y).at(x) == '.')count++;
            }
            if(count == W){
                //flag = true;
                bits.erase(bits.begin() + y);
                H--;
            }
            //else{flag=false;}
            
        }
        rep(x,W){
            int count =0;
            rep(y,H){
                if (bits.at(y).at(x) == '.')count++;
            }
            if(count == H){
                rep(y,H){
                    bits.at(y).at(x) = 'a';
                }
            }
            //else{//flag=false;}
        }
        rep(y,H){
            rep(x,W){
                if (x != H -1){
                if(bits.at(y).at(x)=='a')continue;    
                cout << bits.at(y).at(x);
                } else {
                    if(bits.at(y).at(x)=='a'){
                        cout << endl;
                        continue;
                        }else{
                    cout << bits.at(y).at(x) << endl;}
                }
            }
        }
        return 0;
    //}
}