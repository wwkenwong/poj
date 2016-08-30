#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=110;
int g[maxn][maxn];
bool vis[maxn][maxn];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int N,M,K;
int max_lake;
//g[row][col]
bool valid(int x,int y){
	if(x<1||y<1||x>N||y>M){
		return 0;
	}
	if(vis[x][y]){
		return 0;
	}
	if(!g[x][y]){
		return 0;
	}
	return 1;
}
void dfs(int x,int y){
	max_lake++;
	vis[x][y]=1;
	
	for(int i=0;i<4;i++){
		int newx=x+dx[i];
		int newy=y+dy[i];
		if(valid(newx,newy)){
			dfs(newx,newy);
		}
	}
	
}
int main(){
	std::ios::sync_with_stdio(false);
	memset(g,0,sizeof(g));
	memset(vis,0,sizeof(vis));
	cin>>N>>M>>K;
	max_lake=0;
	int output=-10000;
	for(int i=0;i<K;i++){
		int row,col;
		cin>>row>>col;
		g[row][col]=1;
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			
			max_lake=0;
			if(g[i][j]){
				dfs(i,j);
				output=max(max_lake,output);
			}
		}
	}
	cout<<output<<"\n";
	return 0;
}
