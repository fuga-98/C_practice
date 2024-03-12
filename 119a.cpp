#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
typedef long long ll;

int main(){
    int Y,M,D;
    scanf("%d/%d/%d",&Y,&M,&D);
    tuple<int,int,int> cur(Y,M,D);
    tuple<int,int,int> hei(2019,4,30);
    if(cur <= hei)printf("Heisei\n");
    else printf("TBD\n");   
    
    return  0;
}