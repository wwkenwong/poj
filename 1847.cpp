#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=110;
const int inf =100000000;
int w[maxn][maxn];
bool vis[maxn];//0,1,inf//
int dist[maxn];
int n,start,en;
void dijk(){
	memset(vis,0,sizeof(vis));
	for(int i=1;i<=n;i++){
		dist[i]=w[start][i];
	}
	dist[start]=0;
	vis[start]=1;
	for(int i=1;i<=n;i++){
		int x,m=inf;
		for(int j=1;j<=n;j++){
			if(!vis[j]&&dist[j]<=m){
				m=dist[x=j];
			}
		}
		vis[x]=1;
		for(int j=1;j<=n;j++){
			dist[j]=min(dist[j],dist[x]+w[x][j]);
		}
	}
	if(dist[en]==inf){
		cout<<"-1\n";
	}
	else{cout<<dist[en]<<"\n";}
	}

using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	
	cin>>n>>start>>en;
	for(int i=1;i<=n;i++){
		dist[i]=inf;
		for(int j=1;j<=n;j++){
			w[i][j]=inf;
		}
	}
	for(int i=1;i<=n;i++){
		int path;
		cin>>path;
		for(int j=1;j<=path;j++){
			int a;
			cin>>a;
			if(j==1) 
				w[i][a]=0;
			else{
				w[i][a]=1;
			}
		}
	}
	dijk();
	return 0;
}

