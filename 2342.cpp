#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <sstream>
#include <deque>
#include  <math.h>  

using namespace std;
const int maxn=200000;
const int inf=1e9+10;

#define ms(a) memset(a,0,sizeof(a))
typedef long long LL;
const LL LINF = 1e17;
const int MAXN = 150 + 10;
const int MOD = 100000;

int n;
int dp[maxn][2],father[maxn];
bool vis[maxn];

void tree_dp(int node){
    vis[node]=1;
    for(int i=1;i<=n;i++){
        if(!vis[i]&&father[i]==node){
            tree_dp(i);
            dp[node][1]+=dp[i][0];
            dp[node][0]+=max(dp[i][0],dp[i][1]);
        }
    }
}



int main(){
    std::ios::sync_with_stdio(false);
    while(cin>>n){
        int root;
        memset(dp,0,sizeof(dp));
        memset(vis,0,sizeof(vis));
        memset(father,0,sizeof(father));
        for(int i=1;i<=n;i++){
            cin>>dp[i][1];
        }
        root=0;
        int c,f;
        while(cin>>c>>f){
            father[c]=f;
            root=f;
        }
        while(father[root]){
            root=father[root];
        }
        tree_dp(root);
        cout<<max(dp[root][0],dp[root][1])<<"\n";
        
    }
    return 0;
}


