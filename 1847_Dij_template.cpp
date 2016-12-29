#include <iostream>
#include<stdio.h>  
#include<string.h>  
#include <algorithm>

using namespace std;
const int inf=10000000;
const int maxn=1000;
int dis[maxn],N,g[maxn][maxn];
int a,b;//a start,b end

bool v[maxn];

void dijkstra(){
	memset(v,0,sizeof(v));
	for(int i=1;i<N+1;i++){
		dis[i]=g[a][i];
	}
	dis[a]=0;
	v[a]=1;
	for(int i=1;i<N+1;i++){
		int mark=-1,mindis=inf;
		for(int j=1;j<=N;j++){
			if(!v[j]&&dis[j]<=mindis){
				mindis=dis[j];
				mark=j;
			}	
		}
		v[mark]=1;
		for(int j=1;j<N+1;j++){	
			if(!v[j]){
				dis[j]=min(dis[j],dis[mark]+g[mark][j]);
			}
		}
	}	
}

int main(){
	std::ios::sync_with_stdio(false);
	cin>>N>>a>>b;
	for(int i=1;i<N+1;i++){
		dis[i]=inf;
		for(int j=1;j<N+1;j++){
			if(i==j){
				g[i][j]=0;
			}else{
				g[i][j]=inf;
			}
			
		}
	}
	for(int i=1;i<N+1;i++){
		int ki;
		cin>>ki;
		for(int j=1;j<ki+1;j++){
			int path;
			cin>>path;
			if(j==1){
				g[i][path]=0;
			}else{
				g[i][path]=1;
			}
		}
	}	
	dijkstra();
	if(dis[b]==inf){
		cout<<"-1\n";
	}else{
		cout<<dis[b]<<"\n";
	}
	
	return 0;
}

