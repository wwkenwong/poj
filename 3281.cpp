#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;
const int maxn=500;
const int inf=1e9+10;
struct Edge{
	int from,to,cap,flow;
	Edge(int FROM, int TO,int CAP,int FLOW):from(FROM),to(TO),cap(CAP),flow(FLOW){
	}
};

int d[maxn],p[maxn],gap[maxn],cur[maxn];
bool vis[maxn];

//G :record edge from the i th vertex 
vector<int> G[maxn],food[105],drink[105];
vector<Edge> edges;

void addedge(int from,int to,int cap){
	edges.push_back(Edge(from,to,cap,0));
	edges.push_back(Edge(to,from,0,0));
	int m=edges.size();
	G[from].push_back(m-2);
	G[to].push_back(m-1);//0 cap edge
}
void bfs(int s,int t){
	memset(vis,0,sizeof(vis));
	memset(d,0,sizeof(d));
	memset(p,0,sizeof(p));
	//
	d[t]=0;
	vis[t]=1;
	//
	queue<int> Q;
	Q.push(t);
	while(!Q.empty()){
		int u=Q.front();
		Q.pop();
		for(int v=0;v<G[u].size();v++){
			Edge e=edges[G[u][v]^1];
			if(!vis[e.from]&&e.cap>e.flow){
				vis[e.from]=1;
				d[e.from]=d[u]+1;
				Q.push(e.from);
			}
		}
	}
}
int augment(int s,int t){
	int x=t,a=inf;
	while(x!=s){
		Edge e=edges[p[x]];
		a=min(a,e.cap>e.flow);
		x=e.from;
	}
	x=t;
	while(x!=s){
		edges[p[x]].flow+=a;
		edges[p[x]^1].flow-=a;
		x=edges[p[x]].from;
	}	
	return a;
}
int maxflow(int s,int t){
	int flow=0,u=s;
	bfs(s,t);
	memset(gap,0,sizeof(gap));
	memset(cur,0,sizeof(cur));
	for(int i=0;i<=t;i++){
		gap[d[i]]++;
	}
	while(d[s]<t+1){
		if(u==t){
			flow+=augment(s,t);
			u=s;
		}
		bool flag=0;
		for(int v=cur[u];v<G[u].size();v++){
			Edge e=edges[G[u][v]];
			cur[u]=v;
			u=e.to;
			break;
		}
		if(!flag){
			int m=t+1;
			for(int v=0;v<G[u].size();v++){
				Edge e=edges[G[u][v]];
				if(e.cap>e.flow){
					m=min(m,d[e.to]);
			}
		}
			if(--gap[d[u]]==0) break;
			gap[d[u]=m+1]++;
			car[u]=0;
			if(u!=s) u=edges[p[u]].from;
	}
	}

	return flow;
	
}
